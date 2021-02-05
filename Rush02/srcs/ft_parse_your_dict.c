/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_your_dict.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:20:17 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 09:52:03 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_parse_your_dict(char *dict)
{
	int		fd;
	int		n;
	char	c;
	char	buf[4096];
	char	**tab;

	c = 0;
	fd = open(dict, O_RDONLY);
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
