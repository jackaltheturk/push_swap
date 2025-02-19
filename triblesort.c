/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:31:02 by etorun            #+#    #+#             */
/*   Updated: 2025/02/19 12:30:54 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_triblesort(int *xs,int w_one)
{
	if(xs[3] > xs[2])
	{
		if(xs[2] > xs[1])	
		{
			ft_swapx(xs, w_one);
			ft_rrx(xs, 1, w_one);
		}
		else 
		{   
		    if(xs[3] > xs[1])
				ft_rx(xs, 1, w_one);
			else
			    ft_swapx(xs, w_one);
		}
	}
	if(xs[3] > xs[1])
	{
		ft_rrx(xs, 1, w_one);
	}
	else if(xs[2] > xs[1])
	{
		ft_rx(xs, 1, w_one);
		ft_swapx(xs, w_one);
	}
}
/*void ft_turn_put_b(int *as,int *bs,int m_times,int min_i)
{
			if(m_times < 0)
				ft_rrx(bs, m_times * -1, 2);
			else if(m_times > 0)
				ft_rx(bs,m_times,2);
			ft_pb(as,bs,min_i);
}
*/


void ft_pa(int *as,int *bs,int min_i)
{
	as[as[0] + 1] = bs[bs[0]];
	if(bs[bs[0]] <= as[min_i])
		as[min_i] = bs[bs[0]];
	if(bs[bs[0]] >= as[min_i+1])
		as[min_i+1] = bs[bs[0]];
	bs[0]--;
	as[0]++;
	write(1,"pa\n",3);
}

void ft_rrr_maker(int *xs,int times)
{
	int temp;
	int mov;
	int i;

	i = 1;
	mov = xs[0];
	temp = xs[1];
	while(times--)
	{	
		while( i < mov )
		{
			xs[i] = xs[i + 1];
			i++;
		}
		xs[mov]= temp;
		temp = xs[1];
		i = 1;
	}
}
void ft_rr_maker(int *xs, int times)
{
	int temp;
	int mov;
	while(times--)
	{
		mov = xs[0];
		temp = xs[xs[0]];
		while(mov - 1)
		{
			xs[mov] = xs[mov-1];
			mov--;
		}
		xs[1]= temp;
	}
}