/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 08:22:44 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/01 09:36:38 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_readfile(char *str)
{
	int		fd;
	char	c;

	c = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1))
		ft_putchar(c);
	close(fd);
	return (1);
}
