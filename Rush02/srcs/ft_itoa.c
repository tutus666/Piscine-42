/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:00:46 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 10:13:11 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_size(int nb)
{
	int size;

	size = 0;
	while (nb)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		size;
	int		n;

	size = ft_size(nb);
	if (!(str = malloc(sizeof(char) * size + 1)))
		return (0);
	n = 0;
	str[size] = '\0';
	while (size--)
	{
		str[size] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
