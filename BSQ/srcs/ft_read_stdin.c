/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 12:50:57 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 15:44:52 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_read_tab2(char *str)
{
	char	**tab;
	int		n;

	n = 0;
	while (str[n] != '\n')
		n++;
	tab = ft_split(str + n, "\n");
	return (tab);
}

void	ft_cut_params(char *str, t_tmax *t)
{
	char	*params;
	int		size;
	int		n;

	size = 0;
	while (str[size] != '\n')
		size++;
	if (!(params = malloc(sizeof(char) * size + 1)))
		return ;
	n = -1;
	while (++n < size)
		params[n] = str[n];
	params[n] = 0;
	ft_get_params(params, n, t);
}

char	**ft_read_stdin2(t_tmax *t)
{
	int		ret;
	char	**tab;
	char	buf[409600];
	char	c;

	ret = 0;
	c = 0;
	while (read(0, &c, 1) != 0)
		buf[ret++] = c;
	buf[ret] = 0;
	ft_cut_params(buf, t);
	tab = ft_read_tab2(buf);
	return (tab);
}
