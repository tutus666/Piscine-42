/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:10:40 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/18 11:37:57 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int tmp;

	if (!*to_find)
		return (str);
	i = -1;
	while (str[++i])
	{
		if (str[i] == to_find[0])
		{
			tmp = i;
			j = 0;
			while (to_find[j] && to_find[j++] == str[tmp++])
				if (!to_find[j])
					return (str + i);
		}
	}
	return (NULL);
}
