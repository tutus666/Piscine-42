/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 09:54:12 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/26 10:28:26 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int nbr;

	if (power <= 0)
		return (!power ? 1 : 0);
	nbr = nb;
	while (--power)
		nbr *= nb;
	return (nbr);
}
