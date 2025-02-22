/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sure_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:03:29 by etorun            #+#    #+#             */
/*   Updated: 2025/02/22 12:15:50 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c_bonus.h"
#include "../libft/libft.h"
#include <stdlib.h>

void ft_thandler(int *as, int *bs, const char *cur)
{
	if (ft_strncmp("rrr", cur, 4))
	{
		ft_rrx(as);
		ft_rrx(bs);
	}
	else if (ft_strncmp("rra", cur, 4))
		ft_rrx(as);
	else if (ft_strncmp("rrb", cur, 4))
		ft_rrx(bs);
	else
		ft_error();
}

void ft_dhandler(int *as, int *bs, const char *cur)
{
	if (ft_strncmp("rr", cur, 3))
	{
		ft_rx(as);
		ft_rx(bs);
	}
	else if (ft_strncmp("ra", cur, 3))
		ft_rx(as);
	else if (ft_strncmp("rb", cur, 3))
		ft_rx(bs);
	else if (ft_strncmp("ss", cur, 3))
	{	
		ft_sx(as);
		ft_sx(bs);
	}
	else if (ft_strncmp("sa", cur, 3))
		ft_sx(as);
	else if (ft_strncmp("sb", cur, 3))
		ft_sx(bs);
	else if (ft_strncmp("pa", cur, 3))
		ft_px(bs,as);
	else if (ft_strncmp("pb", cur, 3))
		ft_px(as,bs);
	else
		ft_error();
}

void ft_sure(int *as)
{
	const char *cur;
	size_t len;
	int *bs;
	
	bs = malloc(sizeof(int) * (as[0] + 1));
	bs[0] = 0;
	while ((cur = get_next_line(0)))
	{
		len = ft_strlen(cur);
		if ( len > 4 || len == 2 )
			ft_error();
		else if (len == 4)
			ft_thandler(as,bs,cur);
		else if (len == 3)
			ft_dhandler(as,bs,cur);
	}
	if(ft_checksorted(as))
		write(1,"OK\n",3);
	else
		write(1,"KO\n",3);
	free (as);
	free (bs);	
}