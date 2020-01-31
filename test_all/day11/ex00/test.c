/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:03:27 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/21 10:30:04 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../day11/ex00/ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_create_elem(void *data);

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
	char *str = "created list";
	t_list *list;
	list = ft_create_elem(str);
	
	print_list(list);
	

	return (0);
}
