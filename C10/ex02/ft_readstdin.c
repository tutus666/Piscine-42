/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readstdin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:18:21 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 13:25:55 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_readstdin(int nb)
{
	char	c;
	char	buf[409600];
	int		ret;

	c = 0;
	ret = 0;
	while (read(0, &c, 1))
		buf[ret++] = c;
	buf[ret] = 0;
	ft_tail_next(buf, nb, ret);
}
