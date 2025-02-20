/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtofuture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:08:08 by etorun            #+#    #+#             */
/*   Updated: 2025/02/20 22:28:44 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_back_tofuture(int *as, int *bs, int min_i)
{
	while (bs[0])
	{
		if (bs[bs[0]] > as[min_i + 1])
			ft_tpa(as, bs, ft_find_number(as, as[min_i]), min_i);
		else
			ft_tpa(as, bs, ft_cala(as, bs[bs[0]]), min_i);
	}
	ft_turn(as, ft_find_number(as, as[min_i]), 1);
}

void	ft_turn(int *xs, int mci, int w_one)
{
	int	m_times;

	if (mci <= (xs[0] / 2))
		m_times = 1 * mci;
	else
		m_times = xs[0] - mci;
	if (m_times < 0)
		ft_rrx(xs, m_times * -1, w_one);
	else if (m_times > 0)
		ft_rx(xs, m_times, w_one);
}

int	ft_cala(int *as, int number)
{
	int	big_i;
	int	counter ;
	int	flag;

	flag = 0;
	counter = as[0];
	while (counter)
	{
		if (as[counter] > number && flag == 0)
		{
			big_i = counter;
			flag = 1;
		}
		else if (as[counter] > number && as[counter] < as[big_i])
			big_i = counter;
		counter--;
	}
	if (big_i == (as[0] / 2) && as[0] % 2 == 0)
		return (as[0] - big_i);
	else if (big_i <= (as[0] / 2))
		return (-1 * big_i);
	else
		return (as[0] - big_i);
}

void	ft_tpa(int *as, int *bs, int m_times, int min_i)
{
	if (m_times < 0)
		ft_rrx(as, m_times * -1, 1);
	else if (m_times > 0)
		ft_rx(as, m_times, 1);
	ft_pa(as, bs, min_i);
}
