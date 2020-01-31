/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:03:27 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/21 18:45:34 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../day11/ex06/ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void ft_list_clear(t_list **begin_list);

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
	char *fst;
	char *sec;
	char *third;

	list = ft_create_elem("first");
	list->next = ft_create_elem("second");
	list->next->next = ft_create_elem("third");

	fst = list->data;
	sec = list->next->data;
	third = list->next->next->data;
	printf("before\n");
	print_list(list);
	printf("fst - %s, sec - %s, third - %s\n", fst, sec, third);

	printf("after\n");
	ft_list_clear(&list);
	print_list(list);
	
	printf("fst - %s, sec - %s, third - %s\n", fst, sec, third);


	return (0);
}
