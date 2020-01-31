/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:03:27 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/21 16:01:07 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../day11/ex05/ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_push_params(int ac, char **av);

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

int main(int argc, char **argv)
{
	t_list *list;
	list = ft_list_push_params(argc, argv);
	print_list(list);

	return (0);
}
