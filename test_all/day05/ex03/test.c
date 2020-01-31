/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:57:35 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/14 16:21:23 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
//	char *dest = "123";
	char dest[5];
//	printf("slc - %s\n", strcpy(dest, "slc"));
//	printf("after and 12345- %s\n", strcpy(dest, "12345"));
//	printf("empty - %s\n", strcpy(dest, ""));

	printf("abc -  %s\n", ft_strcpy(dest, "abc"));
	printf("1234567 = %s\n", ft_strcpy(dest, "1234567"));

	return (0);
}
