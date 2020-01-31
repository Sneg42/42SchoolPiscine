/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:03:27 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/21 13:23:32 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../day11/ex03/ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int ft_list_size(t_list *begin_list);

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
	list->next->next = ft_create_elem("third elem");
	
	print_list(list);
	printf("%d - numbers of elements", ft_list_size(list));


	printf("\ntest with empty begin_list\n");
	list = NULL;
	
	printf("%d - numbers of elements", ft_list_size(list));

	return (0);
}
