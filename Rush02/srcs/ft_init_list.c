/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 07:15:20 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 14:03:34 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_init_list(char *str)
{
	t_list	*begin_list;
	int		size;
	int		unit;

	unit = 1;
	size = ft_strlen(str);
	begin_list = NULL;
	while (size--)
	{
		begin_list = ft_create_elem_list(begin_list, str[size], unit);
		if (!begin_list)
			return (0);
		unit *= 10;
	}
	return (begin_list);
}
