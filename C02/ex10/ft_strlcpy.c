/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 14:07:16 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/17 08:05:23 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int n;
	unsigned int i;

	n = ft_strlen(src);
	if (size)
	{
		i = -1;
		while (++i < size - 1 && src[i])
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (n);
}
