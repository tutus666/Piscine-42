/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:43:46 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/17 14:59:35 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
