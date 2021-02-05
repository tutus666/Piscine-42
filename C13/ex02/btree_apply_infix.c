/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:16:36 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 16:34:12 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree *e;

	e = root;
	if (e->left)
		btree_apply_infix(e->left, applyf);
	applyf(e->item);
	if (e->right)
		btree_apply_infix(e->right, applyf);
}
