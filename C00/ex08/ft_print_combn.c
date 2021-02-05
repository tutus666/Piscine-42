/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:59:27 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/27 12:39:16 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n)
{
	char	t[11];
	int		i;

	if (n < 1 || n > 9)
		return ;
	t[0] = '0';
	t[n] = ',';
	t[n + 1] = ' ';
	i = 0;
	while (++i < n)
		t[i] = t[i - 1] + 1;
	while (t[0] < 58 - n)
	{
		write(1, t, (t[0] == 58 - n ? n : n + 2));
		i = n;
		while (--i)
		{
			printf("i = %d, n = %d\n", i, n);
			if (t[i]++ <= '9' - n + i)
				break ;
		}
	}
}

int main()
{
	ft_print_combn(4);
	return 0;
}