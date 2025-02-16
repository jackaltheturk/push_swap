/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:31:40 by etorun            #+#    #+#             */
/*   Updated: 2025/02/16 21:58:23 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void ft_turn_put(int *as,int *bs,int m_times,int min_i)
{
			if(m_times < 0)
				ft_rrx(bs, m_times * -1, 2);
			else if(m_times > 0)
				ft_rx(bs,m_times,2);
			ft_pb(as,bs,min_i);
}

void ft_subsort(int *as,int *bs,int min_i)
{
	while(as[0] - 3)
	{
		if(as[as[0]] <= bs[min_i] && as[as[0]] >= bs[min_i+1])
		{
			ft_pb(as,bs,min_i);
		}
		else if(as[as[0]] <= bs[min_i])
		{
			ft_turn_put(as,bs,ft_find_number(bs,bs[min_i+1]),min_i);
		}
		else if(as[as[0]] > bs[min_i+1])
			ft_turn_put(as,bs,ft_calb(bs,as[as[0]]),min_i);
		else
			ft_turn_put(as,bs,ft_calb(bs,as[as[0]]),min_i);
	}
	ft_triblesort(as, 1);
}
void ft_back_tofuture(int*bs,int min_i)
{
	int m_times;
	int total_n;
	
	if(bs[0] == 0)
		return;
	total_n= bs[0];
	m_times = ft_find_number(bs,bs[min_i+1]);
	if(m_times < 0)
				ft_rrx(bs, (m_times * -1), 2);
			else if(m_times > 0)
				ft_rx(bs,m_times,2);
	while(total_n--)
	 	write(1,"pa\n",3);
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
	ft_subsort(as,bs,min_i);
	ft_back_tofuture(bs,min_i);
}