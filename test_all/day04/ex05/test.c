/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 08:34:09 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/11 22:51:19 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(void)
{
	printf("0 - %d \n", ft_sqrt(0));
	printf("-1 - %d \n", ft_sqrt(-1));
	printf("1 - %d \n", ft_sqrt(1));
	printf("2 - %d \n", ft_sqrt(2));
	printf("3 - %d \n", ft_sqrt(3));
	printf("2147483549 - %d \n", ft_sqrt(2147483549));
	printf("2147483647 - %d \n", ft_sqrt(2147483647));
	printf("625 - %d \n", ft_sqrt(625));
	return (0);
}
