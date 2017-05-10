/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 18:45:27 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/17 18:46:49 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p;

	if (size == 0)
		return ((void *)0);
	p = malloc(size);
	if (p)
	{
		ft_bzero(p, size);
		return (p);
	}
	return (NULL);
}
