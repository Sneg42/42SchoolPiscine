/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:03:27 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/22 08:18:19 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../day11/ex09/ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_foreach(t_list *begin_list, void (*f)(void *));

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
int		is_alphnum(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	if (str >= 'A' && str <= 'Z')
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

void	ft_strcapitalize(void *str)
{
	str = "change";
	printf("Inside");

}

int main()
{
	t_list *list;

	list = ft_create_elem("first");
	list->next = ft_create_elem("second");
	list->next->next = ft_create_elem("third");
	list->next->next->next = ft_create_elem("four");
	list->next->next->next->next = ft_create_elem("five");
	printf("before\n");
	print_list(list);	
	printf("\n");

	ft_list_foreach(list, ft_strcapitalize);
	printf("\nafter\n");
	print_list(list);	
	printf("\n");

	return (0);
}
