/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:49:25 by etorun            #+#    #+#             */
/*   Updated: 2025/02/19 22:23:54 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int ft_calb(int *xs,int number)
{
	int i;
	int min_i;
	int max_in;
	int flag;
	
	flag = 0;
	i = 1;
	max_in= xs[0];
	while(i <= max_in)
	{
		if(xs[i] < number && flag==0)
		{	
			min_i = i;
			flag = 1;
		}
		else if(xs[i] < number && xs[i] > xs[min_i])
			min_i = i;
		i++;
	}
	if (min_i <= (xs[0]/2))
		return (-1 * min_i);
	else
		return (xs[0]- min_i);
}

int ft_find_number(int *xs,int number)
{
	int i;
	
	i = 1;
	while(1)
	{
		if(xs[i] == number)
			break;
		i++;
	}
		if (i <= (xs[0] / 2))
			return (-1 * i);
		else
			return (xs[0]-i);
	
}

int ft_local_cost(int *xs,int index)
{
	if (index <= (xs[0] / 2))
			return (-1 * index);
		else
			return (xs[0]-index);
}

