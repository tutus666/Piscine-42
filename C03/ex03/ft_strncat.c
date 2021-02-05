/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:15:44 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/18 16:13:37 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int n;
	unsigned int i;

	if (!nb)
		return (dest);
	i = 0;
	while (dest[i])
		i++;
	n = -1;
	while (*src && ++n < nb)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
