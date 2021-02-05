/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:34:18 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/19 14:18:06 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_base(char *str)
{
	int i;
	int j;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i;
		while (str[++j])
			if (str[i] == str[j])
				return (0);
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;
	unsigned int	size;

	size = ft_strlen(base);
	if (size < 2 || !check_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -nbr;
	}
	else
		nb = nbr;
	if (nb > size - 1)
		ft_putnbr_base(nb / size, base);
	ft_putchar(base[nb % size]);
}
