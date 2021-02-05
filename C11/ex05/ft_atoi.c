/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 08:52:54 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/01 08:13:02 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v'
			|| c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	unsigned int	nb;
	int				n;
	int				sign;

	n = 0;
	while (ft_isspace(str[n]))
		n++;
	sign = 1;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			sign *= -1;
		n++;
	}
	nb = 0;
	while (str[n] >= '0' && str[n] <= '9' && str[n])
		nb = nb * 10 + str[n++] - 48;
	return ((int)nb * sign);
}
