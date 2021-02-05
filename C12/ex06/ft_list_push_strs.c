/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:56:39 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/28 16:12:56 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		n;
	t_list	*elem;
	t_list	*next;

	n = -1;
	while (++n < size)
	{
		elem = ft_create_elem(strs[n]);
		if (n != 0)
			elem->next = next;
		next = elem;
	}
	return (elem);
}
