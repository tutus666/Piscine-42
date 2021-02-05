/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:38:32 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/26 16:51:31 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = -1;
	while (++i < size && *dest)
		dest++;
	if (i == size)
		return (i + ft_strlen(src));
	j = 0;
	while (j < size - i - 1 && src[j])
		*dest++ = src[j++];
	*dest = '\0';
	return (i + ft_strlen(src));
}
