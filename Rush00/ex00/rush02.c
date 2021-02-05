/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 11:44:40 by armansuy          #+#    #+#             */
/*   Updated: 2021/01/16 12:00:45 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_character(int x, int y, int current_line, int current_character)
{
	if (current_line == 0)
	{
		if (current_character == 0 || current_character == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (current_line == y - 1)
	{
		if (current_character == 0 || current_character == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (current_character == 0 || current_character == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int current_line;
	int current_character;

	if (x <= 0 || y <= 0)
		return ;
	current_line = 0;
	while (current_line < y)
	{
		current_character = 0;
		while (current_character < x)
		{
			print_character(x, y, current_line, current_character);
			current_character++;
		}
		ft_putchar('\n');
		current_line++;
	}
}
