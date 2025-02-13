/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:38:02 by etorun            #+#    #+#             */
/*   Updated: 2025/02/12 23:02:21 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc,char **argv)
{
	t_stack *stack_a;
	
	if (argc < 2 || !argv[1][0])
		ft_error();
	stack_a = ft_checker_fixer(argc, argv);
	ft_double_checker(stack_a);
	if(ft_checksorted(stack_a))
		return (0);
	ft_sorter(&stack_a);
	/*while(stack_a)
		{
			printf("next=%p index =%d value=%d\n",stack_a->next,stack_a->index, stack_a->value);
			stack_a = stack_a->next;
		}*/
}