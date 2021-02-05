/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:07:43 by armansuy          #+#    #+#             */
/*   Updated: 2021/02/03 16:46:32 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;

	i = -1;
	while (tab[++i])
	{
		j = i;
		while (tab[++j])
		{
			if (cmp(tab[i], tab[j]) > 0)
				ft_str_swap(&tab[i], &tab[j]);
		}
	}
}
