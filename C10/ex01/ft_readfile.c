/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 07:19:24 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 13:11:18 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_errorno(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

void	ft_readstdin(void)
{
	char	buf[4096];
	char	c;
	int		ret;

	ret = 0;
	c = 0;
	while (read(0, &c, 1))
	{
		buf[ret++] = c;
		if (c == '\n')
		{
			buf[ret] = 0;
			ft_putstr(buf);
			ret = 0;
		}
	}
}

void	ft_readfile(char *str)
{
	int		fd;
	char	c;

	c = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (ft_errorno(str));
	while (read(fd, &c, 1))
		ft_putchar(c);
	close(fd);
}
