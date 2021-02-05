/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:08:40 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 09:51:42 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_parse_dict(void)
{
	int		fd;
	int		n;
	char	c;
	char	buf[4096];
	char	**tab;

	c = 0;
	fd = open(DIC_PATH, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict error\n");
		return (0);
	}
	n = 0;
	while (read(fd, &c, 1))
		buf[n++] = c;
	buf[n] = '\0';
	close(fd);
	tab = ft_split(buf, "\n");
	return (tab);
}
