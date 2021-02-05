/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:49:20 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/26 09:52:12 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;
	int nbr;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	nbr = 1;
	n = 1;
	while (n++ < nb)
		nbr *= n;
	return (nbr);
}
