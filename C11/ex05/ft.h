/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:30:27 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 17:12:54 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void			ft_select_op(int a, int b, char *op);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
void			ft_mult(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);
void			ft_plus(int a, int b);
void			ft_minus(int a, int b);
typedef	void	t_f(int a, int b);
#endif
