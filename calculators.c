/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:49:25 by etorun            #+#    #+#             */
/*   Updated: 2025/02/20 11:24:30 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int ft_calb(int *xs,int number)
{
	int min_i;
	int counter;
	int flag;
	
	flag = 0;
	counter= xs[0];
	while(counter)
	{
		if(xs[counter] < number && flag==0)
		{	
			min_i = counter;
			flag = 1;
		}
		else if(xs[counter] < number && xs[counter] > xs[min_i])
			min_i = counter;
		counter--;
	}
	if (min_i == (xs[0]/2) && xs[0]%2 == 0)
		return (xs[0]- min_i);
	else if (min_i <= (xs[0]/2))
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
		if (i == (xs[0]/2) && xs[0]%2 == 0)
			return (xs[0]- i);
		else if (i <= (xs[0] / 2))
			return (-1 * i);
		else
			return (xs[0]-i);
	
}

int ft_local_cost(int *xs,int index)
{
	if (index == (xs[0]/2) && xs[0]%2 == 0)
		return (xs[0]- index);
	else if (index <= (xs[0] / 2))
		return (-1 * index);
	else
		return (xs[0]-index);
}

