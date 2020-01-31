/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 08:34:09 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/12 12:01:36 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(void)
{
	printf("0 - %d \n", ft_is_prime(0));
	printf("-1 - %d \n", ft_is_prime(-1));
	printf("1 - %d \n", ft_is_prime(1));
	printf("2 - %d \n", ft_is_prime(2));
	printf("3 - %d \n", ft_is_prime(3));
	printf("5 - %d \n", ft_is_prime(5));
	printf("7 - %d \n", ft_is_prime(7));
	printf("11 - %d \n", ft_is_prime(11));
	printf("2147483549 - %d \n", ft_is_prime(2147483549));
	printf("2147483647 - %d \n", ft_is_prime(2147483647));
	printf("221 - %d \n", ft_is_prime(221));
	printf("50621 - %d \n", ft_is_prime(50621));
	printf("437 - %d \n", ft_is_prime(437));
	printf("323 - %d \n", ft_is_prime(323));
	printf("899 - %d \n", ft_is_prime(899));
	return (0);
}
