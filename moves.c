/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:50:52 by etorun            #+#    #+#             */
/*   Updated: 2025/02/15 09:17:42 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void ft_pb(int *as,int *bs,int min_i)
{
	bs[bs[0] + 1] = as[as[0]];
	if(as[as[0]] <= bs[min_i])
		bs[min_i] = as[as[0]];
	if(as[as[0]] >= bs[min_i+1])
		bs[min_i+1] = as[as[0]];
	as[0]--;
	bs[0]++;
	write(1,"pb\n",3);
}

void ft_rb(int *bs,int times)
{
	int temp;
	int mov;
	while(times--)
	{
		mov = bs[0];
		temp = bs[bs[0]];
		while(mov - 1)
		{
			bs[mov] = bs[mov-1];
			mov--;
		}
		bs[1]= temp;
		write(1,"rb\n",3);
	}
}
void ft_rrb(int *bs,int times)
{
	int temp;
	int mov;
	int i;

	i = 1;
	mov = bs[0];
	temp = bs[1];
	while(times--)
	{	
		while( i < mov )
		{
			bs[i] = bs[i + 1];
			i++;
		}
		bs[mov]= temp;
		write(1,"rrb\n",4);
		temp = bs[1];
		i = 1;
	}
}
