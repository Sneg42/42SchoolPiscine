/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testSastantua.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 09:09:55 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/13 11:11:50 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	sastantua(int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
//	int a = *argv[0] - 48;
//	sastantua(a);;
//	sastantua(1);
	sastantua(2);
//	sastantua(3);
//	sastantua(4);
//	sastantua(5);
//	sastantua(6);
//	sastantua(7);
//	sastantua(8);
//	sastantua(10);
	return (0);
}
