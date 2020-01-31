/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:57:35 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/14 14:15:03 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char str[] ="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", str);
	printf("my func - %s\n\n", ft_strcapitalize(str));

	char str1[] = " !!!!1zxcdsf";
	printf("%s\n", str1);
	printf("my func - %s\n\n", ft_strcapitalize(str1));

	char str2[] = "ASDASD dsda ASd fdsf ASD!!!!";
	printf("%s\n", str2);
	printf("my func - %s\n\n", ft_strcapitalize(str2));
	
	return (0);
}
