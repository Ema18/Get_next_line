/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 19:03:15 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/17 19:07:30 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char			*p;
	unsigned int	i;

	if (!s)
		return (NULL);
	p = ft_stralloc(s);
	if (p)
	{
		i = -1;
		while (s[++i])
			p[i] = f(s[i]);
		p[i] = '\0';
	}
	return (p);
}
