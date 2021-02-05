/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:29:58 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 17:07:30 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef	struct	s_btree
{
struct			s_btree *left;
struct			s_btree *right;
void			*item;
}				t_btree;
t_btree			*btree_create_node(void *item);
#endif
