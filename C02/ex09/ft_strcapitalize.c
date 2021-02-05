/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 10:40:58 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/18 13:33:08 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowercase(char *str)
{
	int n;

	n = -1;
	while (str[++n])
		if (str[n] >= 'A' & str[n] <= 'Z')
			str[n] += 32;
	return (str);
}

int		ft_is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int n;

	n = 0;
	ft_strlowercase(str);
	if (ft_is_alpha(str[n]))
		str[n] -= 32;
	while (str[n++])
		if (ft_is_alpha(str[n]) && (str[n - 1] < '0' || str[n - 1] > '9') &&
				(!ft_is_alpha(str[n - 1])))
			str[n] -= 32;
	return (str);
}
