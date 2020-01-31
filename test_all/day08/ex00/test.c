/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:59:45 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/16 15:25:01 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split_whitespaces(char *str);

int main(void)
{
	int i;
	
	char *word = ("abc def ghjik 123 f gdfg 453  	dfds  	 fgd");
	printf("%s\n", word);
	char **str = ft_split_whitespaces(word);
	i = -1;
	while (i++ < 9)
		printf("%s\n", str[i]);	
	printf("\n");

	char *word1 = ("		 def ghjik lmnop qrs");
	printf("%s\n", word1);
	char **str1 = ft_split_whitespaces(word1);
	i = -1;
	while (i++ < 4)
		printf("%s\n", str1[i]);	
	printf("\n");

	char *word2 = ("\nabc def ghjik lmnop       \n");
	printf("%s\n", word2);
	char **str2 = ft_split_whitespaces(word2);
	i = -1;
	while (i++ < 4)
		printf("%s\n", str2[i]);	
	printf("\n");

	char *word3 = ("		abc def ghjik lmnop			");
	printf("%s\n", word3);
	char **str3 = ft_split_whitespaces(word3);
	i = -1;
	while (i++ < 4)
		printf("%s\n", str3[i]);	
	printf("\n");


	return (0);
}
