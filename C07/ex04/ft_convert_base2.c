/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:22:33 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/22 09:06:45 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_check_base(char *str)
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
	return (i < 2 ? 0 : 1);
}

int		ft_is_in_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}
