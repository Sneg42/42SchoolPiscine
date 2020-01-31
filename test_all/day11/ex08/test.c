/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:03:27 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/21 20:24:39 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../day11/ex08/ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_reverse(t_list **begin_list);

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

	list = ft_create_elem("first");
	list->next = ft_create_elem("second");
	list->next->next = ft_create_elem("third");
	list->next->next->next = ft_create_elem("4");
	list->next->next->next->next = ft_create_elem("5");
	printf("before\n");
	print_list(list);	
	printf("\n");

	ft_list_reverse(&list);
	printf("\nafter\n");
	print_list(list);	
	printf("\n");

	return (0);
}
