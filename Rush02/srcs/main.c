/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:19:54 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 17:42:07 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **av)
{
	char	**tab;
	t_list	*list;

	tab = NULL;
	if (ac < 2 || ac > 3)
		return (0);
	if (ac == 2)
	{
		if (ft_check_number(av[1]))
			tab = ft_parse_dict();
	}
	else if (ac == 3)
	{
		if (ft_check_number(av[2]))
			tab = ft_parse_your_dict(av[1]);
	}
	else
		return (0);
	list = ft_init_list(av[ac - 1]);
	if (ft_strlen(av[ac - 1]) > 10)
		return (0);
	ft_get_number_list(list, tab);
	ft_free_tab(tab);
	ft_free_list(list);
	return (0);
}
