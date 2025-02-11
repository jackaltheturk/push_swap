/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:13:49 by etorun            #+#    #+#             */
/*   Updated: 2024/10/11 19:32:14 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;

	if (!dst && !src)
		return (NULL);
	counter = 0 ;
	if (src > dst)
	{
		while (counter < len)
		{
			*(((char *)dst) + counter) = *(((char *)src) + counter);
			counter++;
		}
		return (dst);
	}
	else
	{
		while (counter < len)
		{
			*(((char *)dst) + len - 1)
				= *(((char *)src) + len - 1);
			len--;
		}
		return (dst);
	}
}
