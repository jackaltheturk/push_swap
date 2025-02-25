/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:12:18 by etorun            #+#    #+#             */
/*   Updated: 2025/02/25 19:38:28 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c_bonus.h"
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	*as;

	as = NULL;
	if (argc == 1)
		return (0);
	else if (argc == 2 && !argv[1][0])
		ft_error();
	as = ft_checker_fixer(argc, argv);
	ft_double_checker(as);
	ft_sure(as);
}
