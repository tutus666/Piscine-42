/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:25:39 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/28 15:55:50 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *last;

	last = begin_list;
	while (last->next)
		last = last->next;
	return (last);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;
	t_list *last;

	elem = ft_create_elem(data);
	last = *begin_list;
	while (last->next)
		last = last->next;
	last->next = elem;
}
