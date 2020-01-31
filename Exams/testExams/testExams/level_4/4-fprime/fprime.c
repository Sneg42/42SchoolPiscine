/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:16:14 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/30 16:23:56 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void find_prime(int numb)
{
	int prime = 2;
	while (numb % prime != 0)
	{
		prime++;
	}
	if (numb == prime)
	{
		printf("%d", numb);
		return ;
	}
	printf("%d*",prime);
	find_prime(numb / prime);
}

void fprime(char *str)
{
	int numb = atoi(str);
	if (numb == 1)
		printf("1");
	else
		find_prime(numb);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		fprime(argv[1]);
	printf("\n");
	return (0);
}
