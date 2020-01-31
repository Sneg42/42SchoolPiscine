/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:57:35 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/15 14:18:01 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	printf("strtr with  456 - %s\n", strstr("1234567890", "456"));
	printf("ft_strstr with 456 - %s\n\n", ft_strstr("1234567890", "456"));

	printf("strtr with  0123 - %s\n", strstr("1234567890", "0123"));
	printf("ft_strstr with  0123 - %s\n\n", ft_strstr("1234567890", "0123"));
	
	printf("strtr with 890abc - %s\n", strstr("1234567890", "890abc"));
	printf("ft_strstr with 890abc - %s\n\n", ft_strstr("1234567890", "890abc"));

	printf("strtr with  123456789000 - %s\n", strstr("1234567890", "123456789000"));
	printf("ft_strstr with  123456789000 - %s\n\n", ft_strstr("1234567890", "123456789000"));

	printf("strtr with empty - %s\n", strstr("1234567890", ""));
	printf("ft_strstr with empty - %s\n\n", ft_strstr("1234567890", ""));

	printf("strtr with  890 - %s\n", strstr("1234567890", "890"));
	printf("ft_strstr with 890 - %s\n\n", ft_strstr("1234567890", "890"));

	printf("strtr with  1235 - %s\n", strstr("1234567890", "1235"));
	printf("ft_strstr with 1235 - %s\n\n", ft_strstr("1234567890", "1235"));

	printf("strtr with  1234567890 - %s\n", strstr("1234567890", "1234567890"));
	printf("ft_strstr with 1234567890 - %s\n\n", ft_strstr("1234567890", "1234567890"));
	
	printf("strtr with  34 - %s\n", strstr("12314563409", "34"));
	printf("ft_strstr with 34 - %s\n\n", ft_strstr("12314563409", "34"));
	
	printf("strtr with Food - %s\n", strstr("Foo Bar Baz", "Food"));
	printf("ft_strstr with Food - %s\n\n", ft_strstr("Foo Bar Baz", "Food"));
	
	printf("ft_strstr with Food - %s\n\n", strstr("cccats", "cc"));
	printf("ft_strstr with Food - %s\n\n", ft_strstr("cccats", "cc"));
	return (0);
}
