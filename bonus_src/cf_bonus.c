/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cf_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:22:19 by etorun            #+#    #+#             */
/*   Updated: 2025/02/25 19:38:48 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "c_bonus.h"
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

int	ft_count(int argc, char **argv,int i, int y)
{
	int		count;
	char	**split_k;

	count = 0;
	while (i < argc)
	{
		split_k = ft_split(argv[i], ' ');
		if (!*split_k)
		{
			ft_free_split(split_k);
			ft_error();
		}
		while (split_k[y])
		{
			ft_atoix(split_k[y], split_k);
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
	as = malloc(sizeof(int) * (count + 1));
	as[0] = count;
	while (i < argc)
	{
		split_k = ft_split(argv[i], ' ');
		while (split_k[y])
		{
			as[count] = ft_atoix(split_k[y], split_k);
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
	count = ft_count(argc, argv, 1, 0);
	return (ft_fill(argc, argv, as, count));
}
