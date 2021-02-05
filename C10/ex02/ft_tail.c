/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 08:18:29 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/04 14:20:47 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_tail_more(char **av, int ac, int n)
{
	int	fd;

	if (ac > 4)
	{
		ft_putstr("==> ");
		ft_putstr(av[n]);
		ft_putstr(" <==\n");
	}
	if (av[n + 1])
	{
		fd = open(av[n + 1], O_RDONLY);
		if (fd != -1)
		{
			ft_putstr("\n");
			close(fd);
		}
	}
}

void	ft_tail_next(char *buf, int nb, int size)
{
	int count;

	count = 0;
	while (--size && ++count < nb)
		;
	ft_putstr(&buf[size]);
}

int		ft_tail(char **av, int nb, int ac, int n)
{
	int		fd;
	int		size;
	char	*buf;
	char	c;

	c = 0;
	fd = open(av[n], O_RDONLY);
	if (fd == -1)
		return (-1);
	size = 0;
	while (read(fd, &c, 1))
		size++;
	close(fd);
	if (!(buf = malloc(sizeof(char) * size + 1)))
		return (0);
	fd = open(av[n], O_RDONLY);
	read(fd, buf, size);
	buf[size] = 0;
	ft_tail_more(av, ac, n);
	ft_tail_next(buf, nb, size);
	free(buf);
	return (0);
}
