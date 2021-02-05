/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operate_it.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 09:57:57 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 17:14:28 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_mult(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_div(int a, int b)
{
	if (!b)
		return (ft_putstr("Stop : division by zero"));
	ft_putnbr(a / b);
}

void	ft_mod(int a, int b)
{
	if (!b)
		return (ft_putstr("Stop : modulo by zero"));
	ft_putnbr(a % b);
}

void	ft_plus(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_minus(int a, int b)
{
	ft_putnbr(a - b);
}
