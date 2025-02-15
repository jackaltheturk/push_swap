/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:49:25 by etorun            #+#    #+#             */
/*   Updated: 2025/02/15 18:55:24 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int ft_calb(int *bs,int number)
{
	int i;
	int min_i;
	int max_in;
	int flag;
	
	flag = 0;
	i = 1;
	max_in= bs[0];
	while(i <= max_in)
	{
		if(bs[i] < number && flag==0)
		{	
			min_i = i;
			flag = 1;
		}
		else if(bs[i] < number && bs[i] > bs[min_i])
			min_i = i;
		i++;
	}
	if (min_i <= (bs[0]/2))
		return (-1 * min_i);
	else
		return (bs[0]- min_i);
}

int ft_find_number(int *bs,int number)
{
	int i;
	
	i = 1;
	while(1)
	{
		if(bs[i] == number)
			break;
		i++;
	}
		if (i <= (bs[0] / 2))
			return (-1 * i);
		else
			return (bs[0]-i);
	
}

