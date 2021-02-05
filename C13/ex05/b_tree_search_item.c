/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_tree_search_item.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:08:40 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 17:15:53 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	t_btree *e;

	e = root;
	if (e->left)
		btree_apply_infix(e->left, applyf);
	if (!cmpf(e->item, data_ref))
		return (e->item);
	if (e->right)
		btree_apply_infix(e->right, applyf);
	return (0);
}
