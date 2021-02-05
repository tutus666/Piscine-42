/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 08:36:46 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/01 07:23:16 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int n;
	int direction;

	n = -1;
	direction = 1;
	while (++n < length - 1 && direction)
		if (tab[n] > tab[n + 1])
			direction = 0;
	n = -1;
	while (++n < length - 1)
	{
		if (direction && f(tab[n], tab[n + 1]) > 0)
			return (0);
		else if (!direction && f(tab[n], tab[n + 1]) < 0)
			return (0);
	}
	return (1);
}
