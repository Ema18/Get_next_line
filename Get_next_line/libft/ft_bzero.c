/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 20:34:58 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/14 21:52:50 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function that places n zero-valued bytes in the string pointed by str
** input: str - pointer to the area where the bytes will be placed
**		 n - number of bytes 0 to be placed
** return: -
*/

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
