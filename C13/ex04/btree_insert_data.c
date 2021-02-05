/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:41:52 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 17:12:28 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree *e;
	t_btree *new;

	e = *root;
	if (cmpf(e->item, item) > 0)
	{
		if (e->left)
			btree_insert_data(e->left, item, cmpf);
		else
		{
			if (!(new = btree_create_node(item)))
				return ;
			e->left = new;
		}
	}
	else if (e->right)
		btree_insert_data(e->right, item, cmpf);
	else
	{
		if (!(new = btree_create_node(item)))
			return ;
		e->right = new;
	}
}
