/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 08:06:49 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/28 08:17:35 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int n;
	int *t;

	if (!(t = malloc(sizeof(int) * length)))
		return (0);
	n = -1;
	while (++n < length)
		t[n] = f(tab[n]);
	return (t);
}
