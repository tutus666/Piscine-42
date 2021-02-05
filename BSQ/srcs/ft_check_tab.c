/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 11:07:48 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 15:51:11 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_is_printable(char c)
{
	if (c < ' ' || c > 126)
		return (0);
	return (1);
}

int		ft_check_params(t_tmax *t)
{
	if (!t->row_max || !t->col_max)
		return (0);
	if (!ft_is_printable(t->obs))
		return (0);
	if (!ft_is_printable(t->empty))
		return (0);
	if (!ft_is_printable(t->square))
		return (0);
	if (t->obs == t->empty || t->obs == t->square || t->empty == t->square)
		return (0);
	return (1);
}

int		ft_check_tab(char **tab, t_tmax *t)
{
	int	i;
	int	j;
	int	col;

	i = -1;
	while (++i < t->row_max)
	{
		j = -1;
		while (tab[i][++j])
		{
			if (tab[i][j] != t->obs && tab[i][j] != t->empty)
				return (0);
		}
		if (!i)
			col = j;
		else if (j != col)
			return (0);
	}
	t->col_max = col;
	return (ft_check_params(t));
}
