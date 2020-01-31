/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:57:35 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/15 17:08:24 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strcmp2(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	printf("1234 and 456\n");
	printf("origin func- %d\n", strcmp("abcdef", "456"));
	printf("my func - %d\n\n", ft_strcmp("abcdef", "456"));
//	printf("my func2 - %d\n\n", ft_strcmp2("abcdef", "456"));

	printf("123 iand 456\n");
	printf("origin func- %d\n", strcmp("123", "456"));
	printf("my func - %d\n\n", ft_strcmp("123", "456"));
//	printf("my func2 - %d\n\n", ft_strcmp2("123", "456"));

	printf("123 and 45678989898989898989\n");
	printf("origin func - %d\n", strcmp("123", "456789"));
	printf("my func - %d\n\n", ft_strcmp("123", "456789"));
//	printf("my func2 - %d\n\n", ft_strcmp2("123", "456789"));
	
	printf("abcdefgijklm and fgij \n");
	printf("origin func- %d\n", strcmp("abcdefgijklm", "fgij"));
	printf("my func - %d\n\n", ft_strcmp("abcdefgijklm", "fgij"));
//	printf("my func2 - %d\n\n", ft_strcmp2("abcdefgijklm", "fgij"));
	return (0);
}
