/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 07:18:10 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 11:01:05 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_puthexa(unsigned char c)
{
	char *base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

char	ft_putdata(char *str, int size)
{
	int	n;
	int	same;

	same = 1;
	n = -1;
	ft_putchar('|');
	while (++n < size)
	{
		write(1, (str[n] < ' ' || str[n] > 126) ? "." : str + n, 1);
		if (same && n && str[n - 1] != str[n])
			same = 0;
	}
	write(1, "|\n*\n", same ? 4 : 2);
	return (same ? *str : 0);
}

char	ft_putchar_hex(char *str, int size)
{
	int		n;

	n = -1;
	while (++n < size)
	{
		write(1, "  ", !(n % 8) ? 2 : 1);
		ft_puthexa(str[n]);
	}
	while (n < 16)
		write(1, "    ", !(n++ % 8) ? 4 : 3);
	write(1, "  ", !(n % 8) ? 2 : 1);
	return (ft_putdata(str, size));
}

void	ft_hexdump_next(char *str, int *tsize)
{
	int		n;
	int		size;
	char	same;

	size = ft_strlen(str);
	n = 0;
	while (n < size)
	{
		same = 0;
		ft_putzeros(*tsize);
		ft_putnbr_hex(*tsize);
		same = ft_putchar_hex(str + n, (size - n < 16 ? size - n : 16));
		n += 16;
		*tsize += 16;
		while (same && !check(same, str + n, (size - n < 16 ? size - n : 16)))
		{
			n += 16;
			*tsize += 16;
		}
	}
}

int		ft_hexdump(char *str, int *tsize)
{
	int		fd;
	int		ret;
	char	c;
	char	*buf;

	c = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (fd);
	ret = 0;
	while (read(fd, &c, 1))
		ret++;
	close(fd);
	if (!(buf = malloc(sizeof(char) * ret + 1)))
		return (0);
	fd = open(str, O_RDONLY);
	read(fd, buf, ret);
	buf[ret] = 0;
	ft_hexdump_next(buf, tsize);
	free(buf);
	return (0);
}
