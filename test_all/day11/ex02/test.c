/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:03:27 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/21 13:16:25 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../day11/ex02/ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list ft_list_push_front(t_list **begin_list, void *data);

void print_list(t_list *list)
{
	int i = 0;

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
	
	printf("first list\n");
	print_list(list);
	
	ft_list_push_front(&list, "push front");
	printf("after push front  list\n");
	print_list(list);

	printf("\ntest with empty begin_list\n");
	list = NULL;
	
	ft_list_push_front(&list, "push front empty");
	printf("after push front list\n");
	print_list(list);

	return (0);
}
