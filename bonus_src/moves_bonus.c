/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:38:21 by etorun            #+#    #+#             */
/*   Updated: 2025/02/25 19:40:36 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_rrx(int *xs)
{
	int	temp;
	int	mov;
	int	i;

	if (xs[0] < 2)
		return ;
	i = 1;
	mov = xs[0];
	temp = xs[1];
	while (i < mov)
	{
		xs[i] = xs[i + 1];
		i++;
	}
	xs[mov] = temp;
}

void	ft_rx(int *xs)
{
	int	temp;
	int	mov;

	if (xs[0] < 2)
		return ;
	mov = xs[0];
	temp = xs[xs[0]];
	while (mov - 1)
	{
		xs[mov] = xs[mov - 1];
		mov--;
	}
	xs[1] = temp;
}

void	ft_sx(int *xs)
{
	int	temp;

	if (xs[0] < 2)
		return ;
	temp = xs[xs[0]];
	xs[xs[0]] = xs[xs[0] - 1];
	xs[xs[0] - 1] = temp;
}

void	ft_px(int *ss, int *ds)
{
	if (ss[0] != 0)
		ds[ds[0] + 1] = ss[ss[0]];
	else
		return ;
	ss[0]--;
	ds[0]++;
}
