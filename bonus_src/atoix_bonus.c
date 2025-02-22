/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoix_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:06:44 by etorun            #+#    #+#             */
/*   Updated: 2025/02/22 20:16:24 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c_bonus.h"
#include "../libft/libft.h"

void	ft_str_check(const char *str, char **strhead)
{
	if (!ft_isdigit(*str) || (ft_strlen(str) > 12))
		ft_errortoi(strhead);
}

int	ft_atoix(const char *str, char **strhead)
{
	int				mod;
	long long int	i;

	i = 0;
	mod = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-' && *(str + 1) != '\0')
	{
		mod = -1;
		str++;
	}
	else if (*str == '+' && *(str + 1) != '\0')
		str++;
	while (*str)
	{
		ft_str_check(str, strhead);
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		ft_errortoi(strhead);
	return (mod * i);
}

void	ft_errortoi(char **strhead)
{
	ft_free_split(strhead);
	ft_error();
}
