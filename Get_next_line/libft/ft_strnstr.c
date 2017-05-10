/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 17:57:17 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/17 18:17:21 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*src == 0)
		return ((char *)dst);
	while (dst[i] && i < len)
	{
		j = 0;
		while (dst[i + j] == src[j] && i + j < len)
		{
			if (src[j + 1] == '\0')
				return ((char *)(dst + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
