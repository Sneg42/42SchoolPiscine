/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:57:35 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/13 20:03:29 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{

	printf("	123 - %d\n", atoi("		+123"));
	printf("	123 - %d\n", ft_atoi("		+123"));
	printf("-123 - %d\n", ft_atoi("-123"));
	printf("+123 - %d\n", ft_atoi("+123"));
	printf("0 - %d\n", ft_atoi("0"));
	printf("-0 - %d\n", ft_atoi("-0"));
	printf("hello - %d\n", ft_atoi("hello"));
	printf("hell456 - %d\n", ft_atoi("hell456"));
	printf("789hell - %d\n", ft_atoi("789hell"));
	printf("098-123 - %d\n", ft_atoi("098-123"));
	printf("412.44 - %d\n", ft_atoi("412.44"));
	printf("-2147483648 - %d\n", ft_atoi("-2147483648"));
	printf("2147483647 - %d\n", ft_atoi("2147483647"));
	printf("214748364800 - %d\n", ft_atoi("214748364800"));
	printf("214748364800 - %d\n", atoi("214748364800"));
	return (0);
}
