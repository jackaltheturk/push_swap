/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:31:40 by etorun            #+#    #+#             */
/*   Updated: 2025/02/18 14:18:08 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void ft_minmax(int *as,int min_i)
{
	int max_index;

	max_index = as[0];
	while(max_index)
	{
		if (as[max_index] < as[min_i])
			as[min_i] = as[max_index];
		else if (as[max_index] > as[min_i+1])
			as[min_i+1] = as[max_index];
		max_index--;
	}
}

void ft_turn(int *xs,int mci)
{
	int m_times;
	
	if (mci <= (xs[0] / 2))
			m_times = 1 * mci;
		else
			m_times= xs[0] - mci;
	if(m_times < 0)
		ft_rrx(xs, m_times * -1, 1);
	else if(m_times > 0)
		ft_rx(xs,m_times,1);
	
}
void ft_tp(int *as,int *bs,int m_times,int min_i)
{
			if(m_times < 0)
				ft_rrx(bs, m_times * -1, 2);
			else if(m_times > 0)
				ft_rx(bs,m_times,2);
			ft_pb(as,bs,min_i);
}

void ft_ss(int *as,int *bs,int min_i)
{
	while(as[0])
	{
		if(as[as[0]] <= bs[min_i] && as[as[0]] >= bs[min_i+1])
		{
			bs[min_i] = as[as[0]];
			bs[min_i+1] = as[as[0]];
			ft_pb(as,bs,min_i);
			continue;
		}
		ft_cm(as,bs,min_i);
		if(as[as[0]] <= bs[min_i])
		{
			ft_tp(as,bs,ft_find_number(bs,bs[min_i+1]),min_i);
		}
		else
			ft_tp(as,bs,ft_calb(bs,as[as[0]]),min_i);
	}
	//ft_triblesort(as, 1);
}

void ft_sorter(int *as)
{
	int *bs;
	int min_i;
	
	min_i = as[0] + 1;
	bs = malloc(sizeof(int)*(as[0]+3));
	bs[min_i] = 2147483647;
	bs[min_i+1] = -2147483648;
	bs[0] = 0;
	ft_ss(as,bs,min_i);
	//ft_minmax(as,min_i);
	//ft_back_tofuture(as,bs,min_i);
}
