/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:03:27 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/21 19:07:53 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../day11/ex07/ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_at(t_list *begin_list, unsigned int nbr);

void print_list(t_list *list)
{
	int i = 0;

	if (!list)
		printf("NULL\n");
	while(list)
	{
		printf("%d node in list = %s\n", ++i, list->data);
		list = list->next;
	}
}

int main()
{
	t_list *list;
	int numb;

	list = ft_create_elem("first");
	list->next = ft_create_elem("second");
	list->next->next = ft_create_elem("third");
	list->next->next->next = ft_create_elem("4");
	list->next->next->next->next = ft_create_elem("5");
	printf("before\n");
	print_list(list);	
	printf("\n");

	numb = 2;
	printf("%d element = ", numb);
	print_list(ft_list_at(list, numb));
	printf("\nafter\n");
	print_list(list);	
	printf("\n");

	numb = 1;
	printf("%d element = ", numb);
	print_list(ft_list_at(list, numb));

	numb = 5;
	printf("%d element = ", numb);
	print_list(ft_list_at(list, numb));

	numb = 0;
	printf("%d element = ", numb);
	print_list(ft_list_at(list, numb));

	
	numb = 10;
	printf("%d element = ", numb);
	print_list(ft_list_at(list, numb));

	numb = -5;
	printf("%d element = ", numb);
	print_list(ft_list_at(list, numb));
	
	
	printf("Check with empty list\n");
	list = NULL;
	numb = 2;
	printf("%d element = ", numb);
	print_list(ft_list_at(list, numb));

	return (0);
}
