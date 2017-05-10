/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 17:53:20 by eturcu            #+#    #+#             */
/*   Updated: 2017/02/14 22:05:39 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function that writes a character specified by the argument
** input: c - the character to be printed
*/

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}
