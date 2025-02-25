/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:38:02 by etorun            #+#    #+#             */
/*   Updated: 2025/02/25 17:56:50 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	*as;

	as = NULL;
	as = ft_checker_fixer(argc, argv);
	ft_double_checker(as);
	if (ft_checksorted(as))
	{
		free(as);
		return (0);
	}
	if (as[0] == 2)
	{
		free(as);
		write (1, "sa\n", 3);
	}
	else
		ft_sorter(as);
}
