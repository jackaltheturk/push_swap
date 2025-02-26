/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:45:09 by etorun            #+#    #+#             */
/*   Updated: 2025/02/26 07:57:42 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_finalcost(int a, int b)
{
	if (a <= 0 && b <= 0)
	{
		if (a < b)
			return (a * -1);
		else
			return (b * -1);
	}
	else if (a > 0 && b > 0)
	{
		if (a > b)
			return (a);
		else
			return (b);
	}
	else
	{
		if (a < b)
			return ((a * -1) + b);
		else
			return ((b * -1) + a);
	}
}

void	ft_perfecter(int *xs, int m_times, int w_one)
{
	if (m_times < 0)
		ft_rrx(xs, m_times * -1, w_one);
	else if (m_times > 0)
		ft_rx(xs, m_times, w_one);
}

void	ft_cm(int *as, int *bs, int min_i)
{
	int	min_c_index;
	int	cost_b;
	int	cost_a;

	min_c_index = ft_mci(as, bs, min_i);
	if (as[min_c_index] <= bs[min_i])
		cost_b = ft_find_number(bs, bs[min_i + 1]);
	else
		cost_b = ft_calb(bs, as[min_c_index]);
	cost_a = ft_local_cost(as, min_c_index);
	if (cost_a > 0 && cost_b > 0)
		ft_rr(as, bs, cost_a, cost_b);
	else if (cost_a < 0 && cost_b < 0)
		ft_rrr(as, bs, cost_a, cost_b);
	else
	{
		ft_perfecter(as, cost_a, 1);
		ft_perfecter(bs, cost_b, 2);
	}
}

int	ft_mci(int *as, int *bs, int min_i)
{
	int	a;
	int	min_cost;
	int	mci;
	int	cost;

	a = as[0];
	mci = a;
	min_cost = 2147483647;
	while (a > 0)
	{
		if (as[a] <= bs[min_i])
			cost = ft_find_number(bs, bs[min_i + 1]);
		else
			cost = ft_calb(bs, as[a]);
		cost = ft_finalcost(cost, ft_local_cost(as, a));
		if (cost < min_cost)
		{
			mci = a;
			min_cost = cost;
		}
		a--;
	}
	return (mci);
}
