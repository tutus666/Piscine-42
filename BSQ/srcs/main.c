/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:25:13 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 15:26:15 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_read_stdin(void)
{
	t_tmax	*t;
	char	**tab;

	t = ft_init_struct();
	tab = ft_read_stdin2(t);
	ft_putstr("\n");
	if (!ft_check_tab(tab, t))
		ft_putstr("Map error\n");
	else
		ft_parse_tab(tab, t);
	ft_free_tab(tab);
	ft_free_struct(t);
}

int		main(int ac, char **av)
{
	t_tmax	*t;
	char	**tab;
	int		count;

	count = 0;
	while (++count < ac)
	{
		t = ft_init_struct();
		if (ft_read_params(av[count], t))
			tab = ft_read_tab(av[count]);
		if (!ft_check_tab(tab, t))
			ft_putstr("Map error\n");
		else
		{
			ft_parse_tab(tab, t);
			if (count < ac - 1)
				write(1, "\n", 1);
			ft_free_tab(tab);
		}
		ft_free_struct(t);
	}
	if (ac == 1)
		ft_read_stdin();
	return (0);
}
