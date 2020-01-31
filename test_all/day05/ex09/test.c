/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:57:35 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/14 11:53:53 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strlowcase(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char str[] ="1bcdEFGhijkl";
	printf("%s\n", str);
	printf("my func - %s\n\n", ft_strlowcase(str));

	char str1[] = "abc123EBCG";
	printf("%s\n", str1);
	printf("my func - %s\n\n", ft_strlowcase(str1));

	char str2[] = "abcgfh";
	printf("%s\n", str2);
	printf("my func - %s\n\n", ft_strlowcase(str2));
	
	return (0);
}
