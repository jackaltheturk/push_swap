/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sure_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:03:29 by etorun            #+#    #+#             */
/*   Updated: 2025/02/24 18:34:35 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c_bonus.h"
#include "../libft/libft.h"
#include <stdlib.h>

void	ft_thandler(int *as, int *bs, char *cur, int fail)
{
	if (!ft_strncmp("rrr\n", cur, 4))
	{
		ft_rrx(as, fail);
		ft_rrx(bs, fail);
	}
	else if (!ft_strncmp("rra\n", cur, 4))
		ft_rrx(as, fail);
	else if (!ft_strncmp("rrb\n", cur, 4))
		ft_rrx(bs, fail);
	else
		ft_error();
}

void	ft_dhandler(int *as, int *bs, char *cur, int fail)
{
	if (!ft_strncmp("rr\n", cur, 3))
	{
		ft_rx(as, fail);
		ft_rx(bs, fail);
	}
	else if (!ft_strncmp("ra\n", cur, 3))
		ft_rx(as, fail);
	else if (!ft_strncmp("rb\n", cur, 3))
		ft_rx(bs, fail);
	else if (!ft_strncmp("ss\n", cur, 3))
	{
		ft_sx(as, fail);
		ft_sx(bs, fail);
	}
	else if (!ft_strncmp("sa\n", cur, 3))
		ft_sx(as, fail);
	else if (!ft_strncmp("sb\n", cur, 3))
		ft_sx(bs, fail);
	else if (!ft_strncmp("pa\n", cur, 3))
		ft_px(bs, as, fail);
	else if (!ft_strncmp("pb\n", cur, 3))
		ft_px(as, bs, fail);
	else
		ft_error();
}

void	ft_really(int *as, int *bs, int fail)
{
	char		*cur;
	size_t		len;

	cur = get_next_line(0);
	while (cur)
	{
		len = ft_strlen(cur);
		if (len > 4 || len == 2)
			ft_error();
		else if (len == 4)
			ft_thandler(as, bs, cur, fail);
		else if (len == 3)
			ft_dhandler(as, bs, cur, fail);
		free (cur);
		cur = get_next_line(0);
	}
}

void	ft_sure(int *as, int fail)
{
	int			*bs;

	bs = malloc(sizeof(int) * (as[0] + 2));
	bs[0] = 0;
	bs[fail] = 0;
	ft_really(as, bs, fail);
	if (as[fail] == 1 || bs[fail] == 1)
		write (1, "KO\n", 3);
	else if (ft_checksorted(as) && as[0] == fail - 1)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
	free (as);
	free (bs);
}
