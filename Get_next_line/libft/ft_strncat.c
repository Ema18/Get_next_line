/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 17:39:49 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/17 17:41:28 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		dest_size;

	i = 0;
	dest_size = 0;
	while (s1[dest_size])
		dest_size++;
	while (i < n && s2[i])
	{
		s1[dest_size] = s2[i];
		dest_size++;
		i++;
	}
	s1[dest_size] = '\0';
	return (s1);
}
