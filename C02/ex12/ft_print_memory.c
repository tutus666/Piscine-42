/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 15:17:37 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/19 09:30:36 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthexa(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putdata(char *str, unsigned int size)
{
	unsigned int n;

	n = -1;
	while (++n < size)
	{
		if (!(n % 2))
			ft_putchar(' ');
		ft_puthexa(str[n]);
	}
	while (n < 16)
		write(1, "   ", !(n++ % 2) ? 3 : 2);
	ft_putchar(' ');
	n = -1;
	while (++n < size)
		write(1, ((str[n] < ' ' || str[n] > 126) ? "." : str + n), 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i < size)
	{
		j = 64;
		while ((j -= 8) >= 0)
			ft_puthexa((unsigned long)(addr + i) >> j & 0xff);
		ft_putchar(':');
		ft_putdata(addr + i, (size - i < 16 ? size - i : 16));
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
