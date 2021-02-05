/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:37:48 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 15:11:57 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_check_last_line(int max, int row_max, int i)
{
	if (max > row_max - i)
		max = row_max - i;
	return (max);
}

void	ft_solve_square(char **tab, int i, int j, t_tmax *t)
{
	int row;
	int col;
	int max;

	max = t->row_max - i < t->col_max - j ? t->row_max - i : t->col_max - j;
	row = i - 1;
	while (++row < max + i && tab[row])
	{
		col = j - 1;
		while (++col < max + j && tab[row][col])
		{
			if (tab[row][col] == t->obs || tab[row][col] == '\n')
			{
				if (col - j < max && (col - j <= row - i))
					max = row - i;
				else if (col - j < max)
					max = col - j;
				else if (row - i < max)
					max = row - i;
			}
			ft_check_last_line(max, t->row_max, i);
		}
	}
	if (max > t->size)
		ft_update_tab(i, j, max, t);
}

void	ft_print_tab(char **tab, t_tmax *t)
{
	int i;
	int j;

	i = t->row;
	while (i < t->row + t->size)
	{
		j = t->col;
		while (j < t->col + t->size)
		{
			tab[i][j] = t->square;
			j++;
		}
		i++;
	}
	i = -1;
	while (tab[++i])
	{
		ft_putstr(tab[i]);
		write(1, "\n", 1);
	}
}

void	ft_parse_tab(char **tab, t_tmax *t)
{
	int	i;
	int j;

	i = -1;
	while (++i < t->row_max)
	{
		j = -1;
		while (++j < t->col_max)
			if (tab[i][j] != t->obs)
				ft_solve_square(tab, i, j, t);
	}
	ft_print_tab(tab, t);
}
