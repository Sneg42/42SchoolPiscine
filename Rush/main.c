/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myMain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 19:17:47 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/19 20:00:07 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		solve_sudoku(char **matrix, int row, int col);

void	print_sudoku(char **matrix)
{
	int row;
	int col;

	row = -1;
	while (++row < 9)
	{
		col = -1;
		while (++col < 9)
		{
			write(1, &((matrix[row][col])), 1);
			if (col != 8)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int		col;
	int		i;
	char	**matrix;

	i = -1;
	matrix = (char **)malloc(sizeof(char *) * 9);
	while (++i < argc - 1)
	{
		col = -1;
		matrix[i] = (char *)malloc(sizeof(char) * 10);
		while (++col < 9)
			matrix[i][col] = argv[i + 1][col];
	}
	if (solve_sudoku(matrix, 0, 0))
		print_sudoku(matrix);
	else
		ft_putstr("Error\n");
	return (0);
}
