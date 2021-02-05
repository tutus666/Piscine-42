/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 08:24:27 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/31 17:31:46 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_get_one(t_list *e, char **tab)
{
	int	n;

	n = 0;
	while (tab[n][0] != e->nb)
		n++;
	ft_print_nb(tab, n);
}

void	ft_get_ten(t_list *e, char **tab)
{
	t_list	*next;
	char	*unit;
	int		n;

	if (e->nb == '0')
		return ;
	next = e->next;
	if (e->nb == '1')
		e->unit += next->nb - '0';
	else
		e->unit *= (e->nb - '0');
	unit = ft_itoa(e->unit);
	n = 0;
	while (ft_strncmp(tab[n], unit, 2))
		n++;
	ft_print_nb(tab, n);
	if (e->nb != '1' && next->nb != '0')
	{
		ft_putchar(' ');
		ft_get_one(next, tab);
	}
	free(unit);
}

void	ft_get_hundred_and_thousand(t_list *e, char **tab)
{
	int		n;
	int		size;
	char	*unit;

	n = 0;
	while (tab[n][0] != e->nb)
		n++;
	ft_print_nb(tab, n);
	ft_putchar(' ');
	unit = ft_itoa(e->unit);
	size = ft_strlen(unit);
	n = 0;
	while (ft_strncmp(tab[n], unit, size))
		n++;
	ft_print_nb(tab, n);
	free(unit);
}

t_list	*ft_get_more(t_list *e, char **tab)
{
	unsigned long long	tmp;
	int					count;

	count = 0;
	tmp = e->unit;
	while (tmp >= 1000 && ++count)
		tmp /= 1000;
	e->unit = tmp;
	if (tmp < 10)
		ft_get_one(e, tab);
	else if (tmp < 100)
		ft_get_ten(e, tab);
	else
	{
		ft_get_hundred_and_thousand(e, tab);
		e = e->next;
		if (e->nb != '0')
			ft_putchar(' ');
		ft_get_ten(e, tab);
	}
	e->unit = 1;
	while (count--)
		e->unit *= 1000;
	return (ft_get_even_more(e, tab, tmp));
}

t_list	*ft_get_number_list(t_list *begin_list, char **tab)
{
	t_list	*e;

	e = begin_list;
	while (e)
	{
		if (e->unit == 1)
			ft_get_one(e, tab);
		else if (e->unit == 10 && e->nb != '0')
		{
			ft_get_ten(e, tab);
			break ;
		}
		else if (e->unit <= 1000 && e->nb != '0')
			ft_get_hundred_and_thousand(e, tab);
		else
			e = ft_get_more(e, tab);
		e = ft_check_next(e);
		if (e)
			ft_putchar(' ');
	}
	ft_putchar('\n');
	return (begin_list);
}
