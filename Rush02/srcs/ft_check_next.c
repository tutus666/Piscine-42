/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_next.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 14:03:39 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 14:19:10 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_check_next(t_list *next)
{
	next = next->next;
	while (next)
	{
		if (next->nb != '0')
			return (next);
		next = next->next;
	}
	return (next);
}
