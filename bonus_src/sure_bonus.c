/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sure_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:03:29 by etorun            #+#    #+#             */
/*   Updated: 2025/02/21 20:50:40 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c_bonus.h"
#include "../libft/libft.h"


void ft_sure(int *as)
{
	char *cur;
	size_t len;
	
	while ((cur = get_next_line(0)))
	{
		len = strlen(cur);
		if ( len > 4 || len = 2 )
			ft_error();
		
	}
	
}