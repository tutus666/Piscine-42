/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckhenafr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:27:54 by ckhenafr          #+#    #+#             */
/*   Updated: 2021/02/03 15:59:36 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_read_tab(char *str)
{
	int		ret;
	int		fd;
	char	buf[409600];
	char	c;
	char	**tab;

	c = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1))
		if (c == '\n')
			break ;
	ret = read(fd, buf, 409600);
	buf[ret] = 0;
	tab = ft_split(buf, "\n");
	close(fd);
	return (tab);
}

void	ft_get_params(char *params, int size, t_tmax *t)
{
	char	*str;
	int		nb;
	int		n;

	t->square = params[--size];
	t->obs = params[--size];
	t->empty = params[--size];
	if (!(str = malloc(sizeof(char) * size + 2)))
		return ;
	n = -1;
	while (++n < size + 1)
		str[n] = params[n];
	str[n] = 0;
	free(params);
	nb = ft_atoi(str);
	free(str);
	t->row_max = nb;
}

int		ft_read_params(char *str, t_tmax *t)
{
	int		fd;
	int		ret;
	char	*params;
	char	c;

	c = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	ret = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			break ;
		ret++;
	}
	if (!(params = malloc(sizeof(*params) * ret + 1)))
		return (0);
	close(fd);
	fd = open(str, O_RDONLY);
	read(fd, params, ret);
	params[ret] = 0;
	close(fd);
	ft_get_params(params, ret, t);
	return (1);
}
