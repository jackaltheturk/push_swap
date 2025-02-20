/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:31:02 by etorun            #+#    #+#             */
/*   Updated: 2025/02/20 22:24:40 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_triblesort(int *xs, int w_one)
{
	if (xs[2] > xs[1] && xs[1] > xs[3])
	{
		ft_rrx(xs, 1, w_one);
		ft_swapx(xs, w_one);
	}
	else if (xs[3] > xs[2] && xs[2] > xs[1])
	{
		ft_rx(xs, 1, w_one);
		ft_swapx(xs, w_one);
	}
	else if (xs[3] > xs[2] && !(xs[3] > xs[1]))
		ft_swapx(xs, w_one);
	else if (xs[3] > xs[2] && xs[1] > xs[2])
		ft_rx(xs, 1, w_one);
	else if (xs[3] > xs[1] && !(xs[3] > xs[2]))
		ft_rrx(xs, 1, w_one);
}

void	ft_rrr_maker(int *xs, int times)
{
	int	temp;
	int	mov;
	int	i;

	i = 1;
	mov = xs[0];
	temp = xs[1];
	while (times--)
	{
		while (i < mov)
		{
			xs[i] = xs[i + 1];
			i++;
		}
		xs[mov] = temp;
		temp = xs[1];
		i = 1;
	}
}

void	ft_rr_maker(int *xs, int times)
{
	int	temp;
	int	mov;

	while (times--)
	{
		mov = xs[0];
		temp = xs[xs[0]];
		while (mov - 1)
		{
			xs[mov] = xs[mov - 1];
			mov--;
		}
		xs[1] = temp;
	}
}

void	ft_rr(int *as, int*bs, int a, int b)
{
	int	times;

	if (a < b)
		times = a;
	else
		times = b;
	ft_rr_maker(as, times);
	ft_rr_maker(bs, times);
	while (times--)
		write (1, "rr\n", 3);
}

void	ft_rrr(int *as, int*bs, int a, int b)
{
	int	times;

	if (a <= b)
		times = b * -1;
	else
		times = a * -1;
	ft_rrr_maker(as, times);
	ft_rrr_maker(bs, times);
	while (times--)
		write (1, "rrr\n", 4);
}
