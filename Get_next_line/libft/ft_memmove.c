/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 16:34:41 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/17 17:32:19 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*source;
	char		*dst;
	size_t		i;

	i = -1;
	source = (char *)src;
	dst = (char *)dest;
	if (source < dst)
		while ((int)(--n) >= 0)
			*(dst + n) = *(source + n);
	else
		while (++i < n)
			*(dst + i) = *(source + i);
	return (dst);
}
