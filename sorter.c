/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:31:40 by etorun            #+#    #+#             */
/*   Updated: 2025/02/15 00:00:22 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void ft_turn_put(int *as,int *bs,int m_times)
{
			if(m_times < 0)
				ft_rrb(bs, m_times * -1);
			else if(m_times > 0)
				ft_rb(bs,m_times);
			ft_pb(as,bs);
}

void ft_subsort(int *as,int *bs,int min,int max)
{
	
	while(as[0])
	{
		if(as[as[0]] <= bs[min] && as[as[0]] >= bs[max])
		{
			bs[min] = as[as[0]];
			bs[max] = as[as[0]];
			ft_pb(as,bs);
		}
		else if(as[as[0]] <= bs[min])
		{
			bs[min]= as[as[0]];
			ft_turn_put(as,bs,ft_find_max(bs,bs[max]));
		}
		else
			ft_turn_put(as,bs,ft_calb(bs,as[as[0]]));
	}
}
void ft_sorter(int *as)
{
	int *bs;
	int last;
	
	last = as[0] + 3;
	bs = malloc(sizeof(int)*(last));
	bs[last] = 2147483647;
	bs[last+1] = -2147483648;
	bs[0] = 0;
	ft_subsort(as,bs,last,last + 1);
}