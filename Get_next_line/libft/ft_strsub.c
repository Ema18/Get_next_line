/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 19:22:14 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/17 19:23:43 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p)
	{
		while (start--)
			s++;
		ft_strncpy(p, s, len);
		p[len] = '\0';
	}
	return (p);
}
