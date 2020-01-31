/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 08:34:09 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/11 22:56:43 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_factorial(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(void)
{

	printf("0 - %d \n", ft_recursive_factorial(0));
	printf("-1 - %d \n", ft_recursive_factorial(-1));
	printf("5 - %d \n", ft_recursive_factorial(5));
	printf("12 - %d \n", ft_recursive_factorial(12));
	printf("13 - %d \n", ft_recursive_factorial(13));
	return (0);
}
