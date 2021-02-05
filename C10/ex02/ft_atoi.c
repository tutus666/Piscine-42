/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 08:11:06 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/02 08:12:13 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
			|| c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int n;
	int nb;
	int neg;

	n = 0;
	while (ft_isspace(str[n]))
		n++;
	neg = 1;
	while (str[n] == '-' || str[n] == '+')
		if (str[n++] == '-')
			neg *= -1;
	nb = 0;
	while (str[n] >= '0' && str[n] <= '9')
	{
		nb *= 10;
		nb += str[n] - 48;
		n++;
	}
	return (nb * neg);
}
