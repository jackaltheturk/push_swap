/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_fixer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:47:41 by etorun            #+#    #+#             */
/*   Updated: 2025/02/20 23:08:58 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdlib.h>

void	ft_free_split(char **split_k)
{
	int	i;

	i = 0;
	while (split_k[i])
	{
		free(split_k[i]);
		i++;
	}
	free(split_k);
}

int	ft_count(int argc, char **argv)
{
	int		i;
	int		y;
	int		count;
	char	**split_k;

	i = 1;
	y = 0;
	count = 0;
	while (i < argc)
	{
		split_k = ft_split(argv[i], ' ');
		while (split_k[y])
		{
			ft_atoix(split_k[y]);
			y++;
			count++;
		}
		ft_free_split(split_k);
		y = 0;
		i++;
	}
	return (count);
}

int	*ft_fill(int argc, char **argv, int *as, int count)
{
	int		i;
	int		y;
	char	**split_k;

	i = 1;
	y = 0;
	as = malloc(sizeof(int) * (count + 3));
	as[0] = count;
	while (i < argc)
	{
		split_k = ft_split(argv[i], ' ');
		while (split_k[y])
		{
			as[count] = ft_atoix(split_k[y]);
			y++;
			count--;
		}
		ft_free_split(split_k);
		y = 0;
		i++;
	}
	return (as);
}

int	*ft_checker_fixer(int argc, char **argv)
{
	int	count;
	int	*as;

	as = NULL;
	count = ft_count(argc, argv);
	return (ft_fill(argc, argv, as, count));
}


