/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:38:14 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 16:41:07 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree *e;

	e = root;
	if (e->left)
		btree_apply_suffix(e->left);
	if (e->right)
		btree_apply_suffix(e->right);
	applyf(e->item);
}
