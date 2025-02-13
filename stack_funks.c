/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:49:50 by etorun            #+#    #+#             */
/*   Updated: 2025/02/13 08:41:08 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_stack_new(int index, int value)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = index;
	new->next = NULL;
	return (new);
}

void ft_stack_add_back(t_stack **head,t_stack *new)
{
	t_stack *l_ptr;
	
	if (!head || !(*head))
	{
		*head = new;
		return ;
	}
	l_ptr = ft_stack_last(*head);
	l_ptr -> next = new;
}

t_stack	*ft_stack_last(t_stack *head)
{
	t_stack	*l_ptr;

	if (!head)
		return (NULL);
	l_ptr = head;
	while (l_ptr->next != NULL)
		l_ptr = l_ptr->next;
	return (l_ptr);
}

int ft_stack_len(t_stack *head)
{
	int i;
	
	if (!head)
		return (0);
	i=0;
	while(head -> next)
	{
		head = head-> next;
		i++;
	}
	i++;
	return (i);
}

t_stack *ft_indexed_node(int index,t_stack *head)
{
	while(head)
	{
		if(head -> index == index)
			return head;
		head = head -> next;
	}
	return NULL;
}