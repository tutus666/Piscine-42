/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:18:03 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/25 09:13:15 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_isspace(char c);
int		ft_check_base(char *str);
int		ft_is_in_base(char c, char *str);

int		ft_atoi_base(char *str, char *base)
{
	int nb;
	int neg;
	int n;

	while (ft_isspace(*str))
		str++;
	neg = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			neg *= -1;
	nb = 0;
	while (ft_is_in_base(*str, base))
	{
		n = 0;
		while (base[n] != *str)
			n++;
		nb *= ft_strlen(base);
		nb += n;
		str++;
	}
	return (nb * neg);
}

int		ft_define_size(int nb, int size)
{
	int n;

	n = 1;
	while (nb >= size)
	{
		nb /= size;
		n++;
	}
	return (n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*tab;
	int				size;
	int				nb;
	int				neg;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	neg = (nb < 0 ? 1 : 0);
	nb = (nb < 0 ? -nb : nb);
	size = ft_define_size(nb, ft_strlen(base_to)) + neg;
	if (!(tab = malloc(sizeof(char) * size + 1)))
		return (0);
	tab[size] = '\0';
	while (size--)
	{
		tab[size] = base_to[nb % ft_strlen(base_to)];
		nb /= ft_strlen(base_to);
	}
	if (neg)
		tab[0] = '-';
	return (tab);
}
