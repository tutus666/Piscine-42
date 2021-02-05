/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 08:29:32 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/28 08:36:02 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int n;
	int count;

	count = 0;
	n = -1;
	while (++n < length)
		if (f(tab[n]) != 0)
			count++;
	return (count);
}
