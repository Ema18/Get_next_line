/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:43:28 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/14 22:01:24 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function that copies n characters from memory area str2 to memory area str1
** input: str1 - pointer to the destination array where the content
**               is to be copied
**       str2 - pointer to the source of data to be copied
**       n - this is the number of bytes to be copied
**return: str1 - a pointer to the destination
*/

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = (unsigned char *)str1;
	b = (unsigned char *)str2;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
