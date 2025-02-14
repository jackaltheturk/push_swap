/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_sorter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:59:47 by etorun            #+#    #+#             */
/*   Updated: 2025/02/13 12:36:39 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_position(t_stack **head,t_stack **stack_b,int max)
{
	t_stack *temp;
	int i_position;
	int counter;

	temp = *stack_b;
	while(!((*head)->value > temp -> value))
		temp = temp-> next;
	i_position = temp -> index;
		
		if(i_position > (max/2)+ 1)
		{
			counter=max - i_position + 1;	
			while(counter--)
				ft_rrev(stack_b,max, 2);
		}
		else
			while(i_position--)
				ft_rev(stack_b,2);
	ft_push(head,stack_b,2);			
}

void ft_real_sorter(t_stack **head, int a_max)
{
	t_stack *stack_b;
	int b_max;
	int max_val;
	int min_val;
	
	stack_b = NULL;
	max_val= -2147483648;
	min_val= 2147483647;
	while(a_max > 2 )
	{	
		b_max = ft_enum(stack_b);
		if((*head)->value > max_val || (*head) -> value < min_val)
		{
			if((*head)->value > max_val)
				max_val = (*head) -> value;
			if((*head) ->value < min_val)
				min_val = (*head) -> value;
			ft_push(head,&stack_b,2);
		}
		else
			ft_position(head,&stack_b,b_max);
		a_max = ft_enum(*head);
	}
	ft_sort_trible(head,1);
}
