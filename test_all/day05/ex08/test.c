/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:57:35 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/14 12:16:57 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strupcase(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{

	char str[] = "1bcdEFGhijkl";
	printf("\n%s\n", str);
	printf("my func - %s\n\n", ft_strupcase(str));

	char str1[] = "abc12345EFG";
	printf("\n%s\n", str1);
	printf("my func - %s\n\n", ft_strupcase(str1));

	char str2[] = "ABCDEFGHIJ";
	printf("\n%s\n", str2);
	printf("my func - %s\n\n", ft_strupcase(str2));
	
	return (0);
}
