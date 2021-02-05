/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:12:55 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/30 17:13:41 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_is_sep(char c, char *charset)
{
	int n;

	n = -1;
	while (charset[++n])
		if (c == charset[n])
			return (1);
	return (0);
}

int		ft_wordcount(char *str, char *charset)
{
	int count;
	int n;

	count = 0;
	n = 0;
	while (str[n])
	{
		while (str[n] && ft_is_sep(str[n], charset))
			n++;
		if (!ft_is_sep(str[n], charset) && str[n])
		{
			count++;
			while (!ft_is_sep(str[n], charset) && str[n])
				n++;
		}
	}
	return (count);
}

int		ft_wordlen(char *str, char *charset)
{
	int n;

	n = 0;
	while (!ft_is_sep(str[n], charset) && str[n])
		n++;
	return (n);
}

char	*ft_strcpy(char *str, int size)
{
	int		n;
	char	*tab;

	tab = malloc(sizeof(char) * size + 1);
	if (!tab)
		return (NULL);
	n = -1;
	while (++n < size)
		tab[n] = str[n];
	tab[n] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		size;
	int		n;
	int		i;

	size = ft_wordcount(str, charset);
	if (!(strs = malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	i = 0;
	n = -1;
	while (++n < size)
	{
		while (ft_is_sep(str[i], charset))
			i++;
		if (!(strs[n] = ft_strcpy(str + i, ft_wordlen(str + i, charset))))
			return (NULL);
		i += ft_wordlen(str + i, charset);
	}
	strs[size] = 0;
	return (strs);
}
