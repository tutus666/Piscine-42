/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 08:05:01 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 14:26:31 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_errorno(char **av, int n)
{
	int	fd;

	ft_putstr("tail: ");
	ft_putstr(av[n]);
	ft_putstr(": No such a file or directory\n");
	if (av[n + 1] && n != 3)
	{
		fd = open(av[n + 1], O_RDONLY);
		if (fd != -1)
		{
			ft_putstr("\n");
			close(fd);
		}
	}
}

void	ft_error_offset(char *str)
{
	ft_putstr("tail: illegal offset -- ");
	ft_putstr(str);
	ft_putstr("\n");
}

void	ft_error_argument(void)
{
	ft_putstr("tail: option requires an argument -- c\n");
	ft_putstr("usage: tail [-F | -f | -r] [-q] [-b # | -c # | -n #] ");
	ft_putstr("[file ...]\n");
}

int		main(int ac, char **av)
{
	int	nb;
	int n;

	if (ac == 2 && !ft_strcmp(av[1], "-c"))
		ft_error_argument();
	else if (ac == 3 && !ft_strcmp(av[1], "-c") && ft_is_numeric(av[2]))
	{
		nb = ft_atoi(av[2]);
		ft_readstdin(nb);
		return (0);
	}
	else if (ac >= 3 && !ft_strcmp(av[1], "-c") && !ft_is_numeric(av[2]))
		ft_error_offset(av[2]);
	else if (ac >= 3 && !ft_strcmp(av[1], "-c") && ft_is_numeric(av[2]))
	{
		nb = ft_atoi(av[2]);
		n = 2;
		while (av[++n])
			if (ft_tail(av, nb, ac, n) == -1)
				ft_errorno(av, n);
	}
	return (0);
}
