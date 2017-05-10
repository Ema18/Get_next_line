/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 17:22:29 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/17 17:29:14 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *d;
	char *s;

	s = (char *)s1;
	d = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, s);
	return (d);
}
