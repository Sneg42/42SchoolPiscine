/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 08:34:09 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/11 23:03:44 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_power(int nb, int power);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(void)
{
	printf("0, 3 - %d \n", ft_iterative_power(0, 3));
	printf("-1, 5 - %d \n", ft_iterative_power(-1, 5));
	printf("1, -1 - %d \n", ft_iterative_power(1, -1));
	printf("2, 10 - %d \n", ft_iterative_power(2, 10));
	printf("2, 31 - %d \n", ft_iterative_power(2, 31));
	return (0);
}
