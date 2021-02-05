/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:03:03 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 16:15:19 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree *e;

	e = root;
	applyf(e->item);
	if (e->left)
		btree_apply_prefix(e->left, applyf);
	if (e->right)
		btree_apply_prefix(e->right, applyf);
}


