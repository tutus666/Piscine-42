/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:18:16 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 17:19:28 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_op(char *str)
{
	if (str[0] != '/' && str[0] != '%' && str[0] != '*' && str[0] != '+' &&
			str[0] != '-')
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (str[1] != '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	return (1);
}

void	ft_select_op(int a, int b, char *op)
{
	t_f *f[5];

	if (!check_op(op))
		return ;
	f[0] = ft_mult;
	f[1] = ft_div;
	f[2] = ft_mod;
	f[3] = ft_plus;
	f[4] = ft_minus;
	if (op[0] == '*')
		f[0](a, b);
	else if (op[0] == '/')
		f[1](a, b);
	else if (op[0] == '%')
		f[2](a, b);
	else if (op[0] == '+')
		f[3](a, b);
	else
		f[4](a, b);
	write(1, "\n", 1);
}
