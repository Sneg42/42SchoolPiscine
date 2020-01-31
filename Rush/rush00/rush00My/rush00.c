/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 11:25:50 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/12 12:21:44 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int col, int x, char first, char sec)
{
	if (col == 1 || col == x)
		ft_putchar(first);
	else
		ft_putchar(sec);
}

void	rush(int x, int y)
{
	int col;
	int row;

	col = x;
	row = y;
	while (row != 0)
	{
		while (col != 0)
		{
			if (row == 1 || row == y)
				print_char(col, x, 'o', '-');
			else
				print_char(col, x, '|', ' ');
			col--;
		}
		ft_putchar('\n');
		col = x;
		row--;
	}
}
