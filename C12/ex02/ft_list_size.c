/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:59:07 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/28 15:24:49 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*elem;
	int		n;

	elem = begin_list;
	n = 1;
	while (elem->next)
	{
		elem = elem->next;
		n++;
	}
	return (n);
}
