/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:06:44 by etorun            #+#    #+#             */
/*   Updated: 2025/02/19 14:25:19 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_str_check(const char *str)
{
	if(!ft_isdigit(*str) || (ft_strlen(str) > 12))
		ft_error();
}

int	ft_atoix(const char *str)
{
	int				mod;
	long long int	i;

	i = 0;
	mod = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
	{
		mod = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		ft_str_check(str);
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		ft_error();
	return (mod * i);
}
