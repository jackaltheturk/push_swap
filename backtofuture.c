/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtofuture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:08:08 by etorun            #+#    #+#             */
/*   Updated: 2025/02/18 10:40:15 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_back_tofuture(int *as, int *bs,int min_i)
{
	if(bs[0] == 0)
		return;
	while(bs[0])
	{
		//ft_turn(as,ft_mci(as,bs));
		if(bs[bs[0]] <= as[min_i])
		{
			ft_tp(bs,as,ft_find_number(as,as[min_i+1]),min_i);
		}
		else if(bs[bs[0]] > as[min_i+1])
			ft_tp(bs,as,ft_calb(as,bs[bs[0]]),min_i);
	}
}