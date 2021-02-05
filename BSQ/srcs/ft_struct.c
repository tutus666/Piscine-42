/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:10:44 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 15:29:27 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_update_tab(int i, int j, int max, t_tmax *t)
{
	t->size = max;
	t->row = i;
	t->col = j;
}

t_tmax	*ft_init_struct(void)
{
	t_tmax *t;

	if (!(t = malloc(sizeof(t_tmax))))
		return (NULL);
	t->size = 0;
	t->row = 0;
	t->col = 0;
	t->square = 0;
	t->obs = 0;
	t->empty = 0;
	t->row_max = 0;
	t->col_max = 0;
	return (t);
}

void	ft_free_struct(t_tmax *t)
{
	free(t);
}

void	ft_free_tab(char **tab)
{
	int n;

	n = 0;
	while (tab[n])
		free(tab[n++]);
	free(tab);
}
