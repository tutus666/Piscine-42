/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 07:06:59 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 10:19:09 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr_hex(int nb);
void	ft_putzeros(int nb);
int		ft_hexdump(char *str, int *tsize);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		check(char c, char *str, int size);

#endif
