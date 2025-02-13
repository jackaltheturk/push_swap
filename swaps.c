/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:47:05 by etorun            #+#    #+#             */
/*   Updated: 2025/02/13 09:12:43 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(t_stack **head,int w_stk)
{
	t_stack *temp;
	(*head) -> index = 1;
	(*head) -> next -> index = 0;
	temp = (*head) -> next;
	(*head) -> next = (*head) -> next -> next;
	temp -> next = *head;
	(*head) = temp;
	if(w_stk == 1)
		write(1,"sa\n",3);
	else if(w_stk == 2)
		write(1,"sb\n",3);
}
void ft_rev(t_stack **head,int w_stk)
{
	t_stack *temp;
	t_stack *last;
	temp = *head;
	last=ft_stack_last(*head);
	last -> next = (*head);
	*head = (*head) -> next;
	temp -> next = NULL;
	ft_enum(*head);
	
	if (w_stk == 1)
		write(1,"ra\n",3);
	else if(w_stk == 2)
		write(1,"rb\n",3);
}
void ft_rrev(t_stack **head, int max_index ,int w_stk)
{
	t_stack *last;
	
	last = ft_stack_last(*head);
	ft_indexed_node(max_index - 1, *head) -> next = NULL;
	last -> next = (*head);
	*head = last;
	ft_enum(*head);
	if (w_stk == 1)
		write(1,"rra\n",3);
	else if(w_stk == 2)
		write(1,"rrb\n",3);
}

void ft_push(t_stack **stack_src,t_stack **stack_dst,int to_where)
{
	t_stack *temp ;
	
	temp = *stack_src;
	*stack_src = (*stack_src) -> next;
	ft_enum(*stack_src);
	if (!(*stack_dst))
		temp -> next = NULL;
	else
		temp -> next = *stack_dst;
	*stack_dst = temp;
	ft_enum(*stack_dst);
	if(to_where == 1)
		write(1,"pa\n",3);
	else if(to_where ==2)
		write(1,"pb\n",3);
}