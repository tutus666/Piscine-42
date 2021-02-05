/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 07:42:42 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/21 09:24:37 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_str_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_params(int ac, char **av)
{
	int i;
	int j;
	int n;

	i = 0;
	while (++i < ac)
	{
		j = i;
		while (++j < ac)
		{
			n = 0;
			while (av[i][n] || av[j][n])
			{
				if (av[i][n] > av[j][n])
					ft_str_swap(&av[i], &av[j]);
				if (av[i][n] < av[j][n])
					break ;
				n++;
			}
		}
	}
}

int		main(int ac, char **av)
{
	int n;

	if (ac > 2)
		ft_sort_params(ac, &av[0]);
	n = 0;
	while (++n < ac)
		ft_putstr(av[n]);
	return (0);
}
