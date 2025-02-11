/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_funks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:49:50 by etorun            #+#    #+#             */
/*   Updated: 2025/02/09 11:29:13 by etorun           ###   ########.fr       */
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
	new->sorted_index = 0;
	new->next = NULL;
	new->prev = NULL;
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
	new -> prev = l_ptr;
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