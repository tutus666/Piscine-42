/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 09:39:23 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 10:39:09 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int nb)
{
	int i;

	if (!nb)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < nb - 1 && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
