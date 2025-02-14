/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:33:06 by etorun            #+#    #+#             */
/*   Updated: 2025/02/13 10:36:43 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_trible(t_stack **head,int w_stk)
{
	if((*head)-> value > (*head)->next->value)
		{
			if((*head)-> value > (*head) -> next -> next -> value)
			{
				ft_rev(head, w_stk);
			}
			else
				ft_swap(head, w_stk);	
		}
	if((*head) -> value > (*head) -> next-> value)
		ft_swap(head, w_stk);
	if((*head)-> value > (*head)->next->next-> value)
		ft_rrev(head, 2, w_stk);
	if ((*head)-> next -> value > (*head) -> next -> next -> value)
		{
			ft_swap(head,1);
			ft_rev(head,1);
		}
}

void ft_sorter(t_stack **head)
{
	int len;

	len = ft_stack_len(*head);
	
	if (len == 2)
		{
		ft_swap(head, 1);
		}
	else if (len == 3)
		{
			ft_sort_trible(head, 1);
		}
	else
		ft_real_sorter(head, len - 1);
}
int ft_enum(t_stack *head)
{
	int i = 0;
	while(head)
	{
		head -> index = i;
		head = head->next;
		i++;
	}
	return (i-1);
}
