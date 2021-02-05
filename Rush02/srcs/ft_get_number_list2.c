/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number_list2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 15:22:14 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 17:10:58 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_get_even_more(t_list *e, char **tab, int skip)
{
	int		n;
	int		size;
	char	*unit;

	n = 0;
	unit = ft_itoa(e->unit);
	size = ft_strlen(unit);
	n = 0;
	while (ft_strncmp(tab[n], unit, size))
		n++;
	ft_putchar(' ');
	ft_print_nb(tab, n);
	while (skip /= 10)
		e = e->next;
	free(unit);
	return (e);
}
