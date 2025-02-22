/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:38:21 by etorun            #+#    #+#             */
/*   Updated: 2025/02/22 12:19:13 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	temp = xs[3];
	xs[3] = xs[2];
	xs[2] = temp;
}

void	ft_px(int *ss, int *ds)
{
	ds[ds[0] + 1] = ss[ss[0]];
	ss[0]--;
	ds[0]++;
}