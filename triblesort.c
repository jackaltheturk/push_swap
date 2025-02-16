/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:31:02 by etorun            #+#    #+#             */
/*   Updated: 2025/02/16 21:52:27 by etorun           ###   ########.fr       */
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
