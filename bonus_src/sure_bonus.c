/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sure_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:03:29 by etorun            #+#    #+#             */
/*   Updated: 2025/02/22 23:21:30 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c_bonus.h"
#include "../libft/libft.h"
#include <stdlib.h>

void	ft_thandler(int *as, int *bs, const char *cur)
{
	if (!ft_strncmp("rrr\n", cur, 4))
	{
		ft_rrx(as, bs);
		ft_rrx(bs, as);
	}
	else if (!ft_strncmp("rra\n", cur, 4))
		ft_rrx(as, bs);
	else if (!ft_strncmp("rrb\n", cur, 4))
		ft_rrx(bs, as);
	else
		ft_error();
}

void	ft_dhandler(int *as, int *bs, const char *cur, int max)
{
	if (!ft_strncmp("rr\n", cur, 3))
	{
		ft_rx(as, bs);
		ft_rx(bs, as);
	}
	else if (!ft_strncmp("ra\n", cur, 3))
		ft_rx(as, bs);
	else if (!ft_strncmp("rb\n", cur, 3))
		ft_rx(bs, as);
	else if (!ft_strncmp("ss\n", cur, 3))
	{
		ft_sx(as, bs);
		ft_sx(bs, as);
	}
	else if (!ft_strncmp("sa\n", cur, 3))
		ft_sx(as, bs);
	else if (!ft_strncmp("sb\n", cur, 3))
		ft_sx(bs, as);
	else if (!ft_strncmp("pa\n", cur, 3))
		ft_px(bs, as, max);
	else if (!ft_strncmp("pb\n", cur, 3))
		ft_px(as, bs, max);
	else
		ft_error();
}

void	ft_really(int *as, int *bs)
{
	const char	*cur;
	int			max;
	size_t		len;

	max = as[0];
	cur = get_next_line(0);
	while (cur)
	{
		len = ft_strlen(cur);
		if (len > 4 || len == 2)
			ft_error();
		else if (len == 4)
			ft_thandler(as, bs, cur);
		else if (len == 3)
			ft_dhandler(as, bs, cur, max);
		cur = get_next_line(0);
	}
}

void	ft_sure(int *as)
{
	int			*bs;
	int			total;

	total = as[0];
	bs = malloc(sizeof(int) * (as[0] + 1));
	bs[0] = 0;
	ft_really(as, bs);
	if (ft_checksorted(as) && as[0] == total)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
	free (as);
	free (bs);
}
