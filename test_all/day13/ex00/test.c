/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddvorove <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:02:20 by ddvorove          #+#    #+#             */
/*   Updated: 2020/01/23 14:23:24 by ddvorove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../day13/ex00/ft_btree.h"
#include <stdlib.h>
#include <stdio.h>
void print_node(t_bree *node)
{
	printf("%s ", node.item);
}
void print_tree(t_btree *tree)
{
	t_btree *queue[100];
	t_btree *temp;
	int i;
	i = 0;
	queue[i] = tree;
	while (queue)
	{	
		temp = *queue++;
		if (!temp.left)
			queue++ = temp.left;
		if (!temp.right)
			queue++ = temp.right;
		print_node(temp);
		
	}
		printf("%s", tree.node);
}

int main()
{
	t_btree *tree;

	tree = btree_create_node("Head");
	
}
