/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ct_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:50:19 by etorun            #+#    #+#             */
/*   Updated: 2025/02/21 19:25:01 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c_bonus.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_double_checker(int *as)
{
	int	i;
	int	y;

	i = 1;
	y = 1;
	while (y < as[0])
	{
		i = y + 1;
		while (i < as[0] + 1)
		{
			if (as[y] == as[i])
				ft_error();
			i++;
		}
		y++;
	}
}

int	ft_checksorted(int *as)
{
	int	i;

	i = 1;
	while (i < as[0])
	{
		if (as[i] < as[i + 1])
			return (0);
		i++;
	}
	return (1);
}
void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

