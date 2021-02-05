/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 13:34:30 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 13:47:53 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void	ft_print_nb(char **tab, int i)
{
	int	j;

	j = 0;
	while (!ft_is_alpha(tab[i][j]))
		j++;
	while (tab[i][j])
		ft_putchar(tab[i][j++]);
}
