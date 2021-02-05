/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 13:34:40 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 15:28:59 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef	struct	s_tmax
{
	int			size;
	int			row;
	int			col;
	int			row_max;
	int			col_max;
	char		square;
	char		obs;
	char		empty;
}				t_tmax;

t_tmax			*ft_init_struct(void);
void			ft_putstr(char *str);
void			ft_parse_tab(char **tab, t_tmax *t);
void			ft_update_tab(int i, int j, int max, t_tmax *t);
void			ft_free_tab(char **tab);
void			ft_free_struct(t_tmax *t);
void			ft_get_params(char *params, int ret, t_tmax *t);
char			**ft_split(char *str, char *charset);
char			**ft_read_tab(char *str);
char			**ft_read_tab2(char *str);
char			**ft_read_stdin2(t_tmax *t);
int				ft_read_params(char *str, t_tmax *t);
int				ft_atoi(char *str);
int				ft_strlen(char *str);
int				ft_check_tab(char **tab, t_tmax *t);

#endif
