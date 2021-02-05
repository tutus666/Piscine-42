/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 08:06:03 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/14 16:38:11 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char t[5];

	t[0] = '0' - 1;
	t[3] = ',';
	t[4] = ' ';
	while (++t[0] <= '7')
	{
		t[1] = t[0];
		while (++t[1] <= '8')
		{
			t[2] = t[1];
			while (++t[2] <= '9')
				write(1, t, (t[0] == '7' ? 3 : 5));
		}
	}
}
