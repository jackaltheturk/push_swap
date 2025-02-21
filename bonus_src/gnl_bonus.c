/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:19:12 by etorun            #+#    #+#             */
/*   Updated: 2025/02/21 20:00:12 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	char	*src;

	src = (char *)s;
	if (!src)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
	}
	else
	{
		if ((ft_strlen(s) - start) < len)
			len = ft_strlen(s) - start;
		str = (char *)malloc((sizeof(char) * len) + 1);
		if (!str)
			return (NULL);
		ft_strlcpy(str, (char *)(s + start), len + 1);
	}
	return (str);
}

char	*read_line(int fd, char *forever)
{
	char	*buf;
	int		rd;
	char	*temp;

	rd = 1;
	buf = malloc(5 + 1);
	ft_memset(buf, '\0', 5 + 1);
	while (!(ft_strchr(buf, '\n')) && rd != 0)
	{
		rd = read(fd, buf, 5);
		if (rd == 0 && forever == NULL)
			return (free(buf), NULL);
		if (rd < 0)
			return (free(buf), free(forever), NULL);
		buf[rd] = '\0';
		if (!forever)
		{
			forever = malloc(1);
			forever[0] = '\0';
		}
		temp = forever;
		forever = ft_strjoin(forever, buf);
		free(temp);
	}
	return (free(buf), forever);
}

char	*keep_remain(char *forever)
{
	int		i;
	char	*temp;

	i = 0;
	while (forever[i] != '\0')
	{
		if (forever[i] == '\n')
		{
			temp = forever;
			forever = ft_substr(forever, i + 1, ft_strlen(forever) - i);
			free (temp);
			if (forever[0] == '\0')
				return (free (forever), NULL);
			return (forever);
		}
		i++;
	}
	return (free(forever), NULL);
}

char	*line_whr_iam(char *forever)
{
	char	*done;

	if (ft_strchr(forever, '\n'))
	{
		done = ft_substr(forever, 0, ft_strchr(forever, '\n') - forever + 1);
		return (done);
	}
	else
	{
		done = ft_substr(forever, 0, ft_strlen(forever));
		return (done);
	}
}

char	*get_next_line(int fd)
{
	static char	*forever;
	char		*done;

	if (fd < 0 || 5 <= 0)
		return (NULL);
	forever = read_line(fd, forever);
	if (!forever)
		return (NULL);
	done = line_whr_iam(forever);
	forever = keep_remain(forever);
	return (done);
}
