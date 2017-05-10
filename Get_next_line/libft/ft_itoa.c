/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 19:45:06 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/17 19:47:09 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*p;
	int		s;
	int		neg;

	neg = 0;
	if (n < 0)
		neg = 1;
	s = ft_numsize(n) + neg;
	if ((p = (char *)malloc(sizeof(char) * (s + 1))) == NULL)
		return (NULL);
	p[s] = '\0';
	while (s--)
	{
		p[s] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (neg == 1)
		p[0] = '-';
	return (p);
}
