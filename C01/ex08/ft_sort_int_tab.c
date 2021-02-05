/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:17:30 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/15 07:47:27 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int m;

	if (size < 2)
		return ;
	n = -1;
	while (++n < size)
	{
		m = n;
		while (++m < size)
			if (tab[n] > tab[m])
				ft_swap(&tab[n], &tab[m]);
	}
}
