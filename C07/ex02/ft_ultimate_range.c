/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:49:50 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/27 08:51:36 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int n;
	int size;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = malloc(sizeof(int) * size)))
		return (-1);
	n = -1;
	while (++n < size)
		(*range)[n] = min + n;
	return (size);
}
