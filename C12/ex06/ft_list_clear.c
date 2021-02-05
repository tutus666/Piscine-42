/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:13:55 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/29 09:04:35 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include "ft_list_push_strs.c"
#include "ft_create_elem.c"
#include <stdio.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *next;

	if (!begin_list)
		return ;
	next = begin_list->next;
	return (ft_list_clear(next, free_fct));
	free_fct(begin_list->data);
	free_fct(begin_list);
}

int main(int ac, char **av)
{
	t_list *list;
	t_list *begin;
	int n = -1;

	if (ac)
		;
	list = ft_list_push_strs(ac, av);
	begin = list;
	while (++n < ac)
	{
		printf("%p\n", begin);
		begin = begin ->next;
	}
	ft_list_clear(list, *free);
}
