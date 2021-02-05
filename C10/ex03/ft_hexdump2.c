/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 08:41:24 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 09:58:28 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putzeros(int nb)
{
	int n;

	n = 1;
	while (nb >= 16 && n++)
		nb /= 16;
	while (++n <= 8)
		ft_putchar('0');
}

void	ft_putnbr_hex(int nb)
{
	char *base;

	base = "0123456789abcdef";
	if (nb >= 16)
		ft_putnbr_hex(nb / 16);
	ft_putchar(base[nb % 16]);
}

int		check(char c, char *str, int size)
{
	int	n;

	n = -1;
	while (++n < size)
		if (c != str[n])
			return (1);
	return (0);
}
