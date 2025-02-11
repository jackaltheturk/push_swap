/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:03:05 by etorun            #+#    #+#             */
/*   Updated: 2024/10/14 23:53:28 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			counter;
	unsigned char	*unsig_str;

	unsig_str = (unsigned char *)str;
	counter = 0 ;
	while (counter < n)
	{
		if (unsig_str[counter] == (unsigned char)c)
			return ((void *)(str + counter));
		counter++;
	}
	return (NULL);
}
