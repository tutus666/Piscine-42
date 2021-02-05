/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:18:47 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/20 09:50:49 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int		ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v' ||
			c == ' ')
		return (1);
	return (0);
}

int		check_base(char *str)
{
	int i;
	int j;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '+' || str[i] == '-' || ft_isspace(str[i]))
			return (0);
		j = i;
		while (str[++j])
			if (str[i] == str[j])
				return (0);
	}
	return (1);
}

int		is_in_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int nb;
	int neg;
	int n;

	if (ft_strlen(base) < 2 || !check_base(base))
		return (0);
	while (ft_isspace(*str))
		str++;
	neg = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			neg *= -1;
	nb = 0;
	while (is_in_base(*str, base))
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
