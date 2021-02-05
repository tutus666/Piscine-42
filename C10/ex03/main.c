/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 07:02:08 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 10:29:29 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_error(char *str, int ac, int n)
{
	ft_putstr("hexdump: ");
	ft_putstr(str);
	ft_putstr(": No such a file or directory\n");
	if (n == ac - 1)
	{
		ft_putstr("hexdump: ");
		ft_putstr(str);
		ft_putstr(": Bad file descriptor\n");
	}
}

int		main(int ac, char **av)
{
	int n;
	int size;
	int	tsize;

	if (!ft_strcmp(av[1], "-C"))
	{
		tsize = 0;
		size = 0;
		n = 1;
		while (++n < ac)
		{
			if (ft_hexdump(av[n], &size) == -1)
				ft_error(av[n], ac, n);
			tsize += ft_strlen(av[n]);
		}
		if (tsize)
		{
			ft_putzeros(tsize);
			ft_putnbr_hex(tsize);
			ft_putchar('\n');
		}
	}
	return (0);
}
