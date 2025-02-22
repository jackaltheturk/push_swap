/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:38:21 by etorun            #+#    #+#             */
/*   Updated: 2025/02/22 15:53:15 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_rrx(int *xs)
{
	int	temp;
	int	mov;
	int	i;

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
	
	if(!(xs[0] >= 2))
	{
		write(1, "KO\n", 3);		
		exit(1);
	}
	temp = xs[xs[0]];
	xs[xs[0]] = xs[xs[0] - 1];
	xs[xs[0] - 1 ] = temp;
}

void	ft_px(int *ss, int *ds,int max)
{
	if (ds[0] != max)
		ds[ds[0] + 1] = ss[ss[0]];
	else
	{
		write(1,"MAX GECİLDİ\n",13);
		exit(1);
	}	
	ss[0]--;
	ds[0]++;
}