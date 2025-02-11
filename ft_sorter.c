/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:30:03 by etorun            #+#    #+#             */
/*   Updated: 2025/02/09 19:24:33 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_enumerator(t_stack **head)
{
	int i = 1;
	t_stack *sorted;
	
	sorted = *head;
	while(sorted)
	{
		sorted-> sorted_index = i;
		sorted = sorted->next;
		i++;
	}
}

t_stack *ft_exchange(t_stack *first,t_stack **head)
{
	t_stack *pre_keeper;
	t_stack *next_keeper;

	next_keeper = first -> next;
	pre_keeper = first -> prev;
	if(first -> next -> next)
		first -> next -> next -> prev = first;
	if(first -> prev)
		first -> prev -> next = first-> next;
	first -> prev = first->next;
	first -> next = next_keeper -> next;
	next_keeper -> prev = pre_keeper;
	next_keeper -> next = first;
	if(next_keeper -> prev == NULL)
		*head =	next_keeper;
	return (*head);
}
void ft_sorter(t_stack **head)
{
	t_stack *first;
	
	
	first = *head;
	while(first -> next)
	{
		if(first->value > first->next->value)
		{
			first =ft_exchange(first,head);
		}	
		else
		 	first = first -> next;
	}
	ft_enumerator(head);
}

void ft_back_to(t_stack **head)
{
	t_stack *first;
	
	first = *head;
	while(first -> next)
	{
		if(first->index > first->next-> index)
		{
			first =ft_exchange(first,head);
		}	
		else
		 	first = first -> next;
	}
}