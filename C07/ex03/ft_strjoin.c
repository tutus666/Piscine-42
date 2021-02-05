/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:56:37 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/25 08:50:39 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int		ft_tabsize(int size, char **strs, char *sep)
{
	int i;
	int len;

	len = 0;
	i = -1;
	while (++i < size && strs[i])
		len += ft_strlen(strs[i]);
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

int		ft_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while (src[n])
		*dest++ = src[n++];
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		len;

	if (!size)
	{
		tab = malloc(sizeof(char));
		tab[0] = '\0';
		return (tab);
	}
	len = ft_tabsize(size, strs, sep);
	if (!(tab = malloc(sizeof(char) * len + 1)))
		return (tab);
	j = 0;
	i = -1;
	while (++i < size && strs[i])
	{
		j += ft_strcpy(&tab[j], strs[i]);
		if (i < size - 1 && strs[i + 1])
			j += ft_strcpy(&tab[j], sep);
	}
	tab[len] = '\0';
	return (tab);
}
