/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 08:07:02 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 14:22:53 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_readstdin(int nb);
void	ft_putstr(char *str);
void	ft_tail_next(char *buf, int nb, int size);
int		ft_strcmp(char *s1, char *s2);
int		ft_is_numeric(char *str);
int		ft_atoi(char *str);
int		ft_tail(char **av, int nb, int ac, int n);
#endif
