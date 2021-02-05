/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:22:40 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/22 08:02:36 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int n;
	int *tab;

	tab = malloc(sizeof(int) * (max - min));
	if (!tab || min >= max)
		return (NULL);
	n = 0;
	while (min < max)
		tab[n++] = min++;
	return (tab);
}
