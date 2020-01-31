/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:57:35 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/14 16:20:59 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char dest[20];
	printf("123slc, 6 - %s\n", strncpy(dest, "123slc", 6));
	printf("45667890, 4- %s\n", strncpy(dest, "45667890", 4));
	printf("empty, 0 - %s\n\n", strncpy(dest, "", 0));
	printf("abcdef, 10 - %s\n\n", strncpy(dest, "abcdef", 10));

	printf("123slc, 6 - %s\n", ft_strncpy(dest, "123slc", 6));
	printf("45667890, 4- %s\n", ft_strncpy(dest, "45667890", 4));
	printf("empty, 0 - %s\n\n", ft_strncpy(dest, "", 0));
	printf("abcdef, 10 - %s\n\n", ft_strncpy(dest, "abcdef", 10));
//	printf("slc - %s\n", ft_strcpy(dest, "slc"));
//	printf("empty - %s\n", ft_strcpy(dest, ""));
//	printf("after and 12345- %s\n", ft_strcpy(dest, "1234567"));

	return (0);
}
