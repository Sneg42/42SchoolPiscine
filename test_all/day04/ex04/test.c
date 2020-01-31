/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 08:34:09 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/11 23:22:03 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_fibonacci(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(void)
{
	printf("0 - %d \n", ft_fibonacci(0));
	printf("-1 - %d \n", ft_fibonacci(-1));
	printf("10 - %d \n", ft_fibonacci(10));
	printf("25 - %d \n", ft_fibonacci(25));
//	printf("300 - %d \n", ft_fibonacci(300));
	return (0);
}
