/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:57:35 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/14 14:19:25 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_str_is_alpha(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char str[] ="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", str);
	printf("my func - %d\n\n", ft_str_is_alpha(str));

	char str1[] = " 1zxcdsf!";
	printf("%s\n", str1);
	printf("my func - %d\n\n", ft_str_is_alpha(str1));

	char str2[] = "abcdefghiklmnop";
	printf("%s\n", str2);
	printf("my func - %d\n\n", ft_str_is_alpha(str2));
	
	char str3[] = "";
	printf("%s\n", str3);
	printf("my func - %d\n\n", ft_str_is_alpha(str3));
	
	return (0);
}
