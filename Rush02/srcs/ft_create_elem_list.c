/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 07:12:58 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 13:46:15 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_create_elem_list(t_list *next, char nb, int unit)
{
	t_list	*e;

	if (!(e = malloc(sizeof(t_list))))
		return (0);
	e->next = next;
	e->nb = nb;
	e->unit = unit;
	return (e);
}
