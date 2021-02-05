/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:44:28 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/30 13:49:41 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_check_number(char *str)
{
	int	n;

	n = -1;
	while (str[++n])
	{
		if (str[n] < '0' || str[n] > '9')
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	return (1);
}
