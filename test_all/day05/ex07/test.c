/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:57:35 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/14 09:08:11 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	printf("1234 and 456, 2\n");
	printf("origin func- %d\n", strncmp("abcdef", "456", 2));
	printf("my func - %d\n\n", ft_strncmp("abcdef", "456", 2));

	printf("123 iand 456, 1\n");
	printf("origin func- %d\n", strncmp("123", "456", 1));
	printf("my func - %d\n\n", ft_strncmp("123", "456", 1));

	printf("123456 and 456789, 3\n");
	printf("origin func - %d\n", strncmp("123456", "456789", 3));
	printf("my func - %d\n\n", ft_strncmp("123456", "456789", 3));
	
	printf("abcdefgijklm and abcdefg, 4 \n");
	printf("origin func- %d\n", strncmp("abcdefgijklm", "abcdefg", 4));
	printf("my func - %d\n\n", ft_strncmp("abcdefgijklm", "abcdefg", 4));
	return (0);
}
