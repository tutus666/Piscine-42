/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:26:49 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 16:42:13 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define DIC_PATH "srcs/dict/numbers.en.dict"

void					ft_putchar(char c);
void					ft_putstr(char *str);
void					ft_print_nb(char **tab, int i);
void					ft_free_tab(char **tab);
int						ft_check_number(char *str);
int						ft_strlen(char *str);
int						ft_strncmp(char *s1, char *s2, int nb);
char					*ft_itoa(int nb);
char					**ft_parse_dict(void);
char					**ft_parse_your_dict(char *dict);
char					**ft_split(char *str, char *charset);
typedef	struct			s_list
{
	char				nb;
	unsigned long long	unit;
	struct s_list		*next;
}						t_list;
t_list					*ft_init_list(char *str);
t_list					*ft_create_elem_list(t_list *next, char nb, int unit);
t_list					*ft_get_number_list(t_list *begin_list, char **tab);
t_list					*ft_print_nbr_list(t_list *begin_list);
t_list					*ft_check_next(t_list *next);
t_list					*ft_get_even_more(t_list *e, char **tab, int skip);
void					ft_free_list(t_list *list);

#endif
