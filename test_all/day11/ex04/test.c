/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:03:27 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/21 14:18:35 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../day11/ex04/ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_last(t_list *begin_list);

void print_list(t_list *list)
{
	int i = 0;

	if (!list)
		printf("NULL");
	while(list)
	{
		printf("%d node in list = %s\n", ++i, list->data);
		list = list->next;
	}
}

int main()
{
	t_list *list;
	list = ft_create_elem("first elem");
	list->next = ft_create_elem("second elem");
	list->next->next = ft_create_elem("third elem");
	
	print_list(list);
	printf("last elem - ");
   	print_list(ft_list_last(list));	
	printf("\ncheck origin list after function\n");
	print_list(list);

	printf("\ntest with empty begin_list\n");
	list = NULL;
	
	printf("last elem - ");
	print_list(ft_list_last(list));

	return (0);
}
