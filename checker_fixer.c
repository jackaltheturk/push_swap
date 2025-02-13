/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_fixer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:47:41 by etorun            #+#    #+#             */
/*   Updated: 2025/02/13 08:41:00 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void ft_free_split(char **split_k) 
{
    int i = 0;
    while (split_k[i]) {
        free(split_k[i]);
        i++;
    }
    free(split_k);
}

t_stack *ft_checker_fixer(int argc,char **argv)
{
	int	i;
	int y;
	int index;
	char **split_k;
	t_stack *temp;
	
	temp = NULL;
	i = 1;
	y= 0;
	index = 0;
	while(i < argc)
	{
		split_k = ft_split(argv[i],' ');
		while(split_k[y])
		{
			ft_stack_add_back(&temp, ft_stack_new(index, ft_atoix(split_k[y])));
			y++;
			index++;
		}
		ft_free_split(split_k);
		y = 0;
		i++;
	}
	return (temp);	
}

void ft_double_checker(t_stack *check_me)
{
	int keeper;
	t_stack *temp;
	
	temp = check_me;
	while(temp -> next)
	{
		keeper = temp -> value;
		while(check_me -> next)
		{
			if(keeper == check_me->next->value)
				ft_error();
			check_me =check_me->next;	
		}
		temp = temp -> next;
		check_me = temp;	
	}
}
int	ft_checksorted(t_stack *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->value > stack_a->next->value)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
