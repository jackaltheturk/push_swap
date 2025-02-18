/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:50:52 by etorun            #+#    #+#             */
/*   Updated: 2025/02/18 13:33:34 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void ft_pb(int *as,int *bs,int min_i)
{
	bs[bs[0] + 1] = as[as[0]];
	if(as[as[0]] < bs[min_i])
		bs[min_i] = as[as[0]];
	else if(as[as[0]] > bs[min_i+1])
		bs[min_i+1] = as[as[0]];
	as[0]--;
	bs[0]++;
	write(1,"pb\n",3);
}

void ft_rx(int *xs,int times,int w_one)
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
		if(w_one == 1)
			write(1,"ra\n",3);
		else if(w_one == 2)
			write(1,"rb\n",3);
		
	}
}
void ft_rrx(int *xs,int times,int w_one)
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
		if (w_one ==1)
			write(1,"rra\n",4);
		if (w_one ==2)
			write(1,"rrb\n",4);
		temp = xs[1];
		i = 1;
	}
}
void ft_swapx(int *xs,int w_one)
{
	int temp;

	temp =xs[3];

	xs[3] = xs[2];
	xs[2] = temp;
	if(w_one == 1)
		write(1,"sa\n",3);
	else if(w_one == 2)
		write(1,"sb\n",3);	
}
