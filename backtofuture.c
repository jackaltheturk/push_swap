/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtofuture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:08:08 by etorun            #+#    #+#             */
/*   Updated: 2025/02/19 22:24:23 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_back_tofuture(int *as, int *bs,int min_i)
{
	while(bs[0])
	{
		if(bs[bs[0]]  > as[min_i+1])
			ft_tpa(as,bs,ft_find_number(as,as[min_i]),min_i);
		else
			ft_tpa(as,bs,ft_cala(as,bs[bs[0]]),min_i);
			
	}
	ft_turn(as,ft_find_number(as,as[min_i]),1);
}

void ft_turn(int *xs,int mci,int w_one)
{
	int m_times;
	
	if (mci <= (xs[0] / 2))
			m_times = 1 * mci;
		else
			m_times= xs[0] - mci;
	if(m_times < 0)
		ft_rrx(xs, m_times * -1, w_one);
	else if(m_times > 0)
		ft_rx(xs,m_times,w_one);
	
}
int ft_checker2(int *as,int min_i)
{
	int count = as[0];  //fazla fonksiyon***************************

	while(count-1)
	{
		if (as[count] < as[count-1])
			{
				count--;
				continue;}
		else
		{
			ft_minmax(as,min_i);
			if((as[min_i] != as[count-1]) || (as[min_i+1] != as[count]))
				return 0;
		}
	count--;
	}
	return 1;	
}
void ft_medcalculator(int *as,int min_i)
{
	int balance;
	int count;
	int i;
	
	count=as[0];
	while(count)
	{
		balance = 0;
		i = as[0];
		while(i)
		{
			if(as[i] > as[count])
				balance++;
			else if(as[i] < as[count])
				balance--;
			i--;
		}
		if(balance == 0 || balance == 1)
		{
			as[min_i+2] = as[count];
			break;
		}
		count--;
	}
}
int ft_cala(int *as,int number)
{
	int i;
	int big_i;
	int max_in;
	int flag;
	
	flag = 0;
	i = 1;
	max_in= as[0];
	while(i <= max_in)
	{
		if(as[i] > number && flag==0)
		{	
			big_i = i;
			flag = 1;
		}
		else if(as[i] > number && as[i] < as[big_i])
			big_i = i;
		i++;
	}
	if (big_i <= (as[0]/2))
		return (-1 * big_i);
	else
		return (as[0]- big_i);
}
void ft_tpa(int *as,int *bs,int m_times,int min_i)
{
			if(m_times < 0)
				ft_rrx(as, m_times * -1, 1);
			else if(m_times > 0)
				ft_rx(as,m_times,1);
			ft_pa(as,bs,min_i);
}