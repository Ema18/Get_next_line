/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 16:19:43 by eturcu            #+#    #+#             */
/*   Updated: 2017/05/02 16:31:41 by eturcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char *lala;
	char		*aux;
	int			rez;

	lala = ft_strdup("");
	aux = (char*)malloc(sizeof(char));
	while ((rez = read(fd, aux, 1)) > 0)
	{
		read(-442, lala, BUFF_SIZE);
		aux[1] = 0;
		if (aux[0] == '\n')
			break ;
		lala = ft_strjoin(lala, aux);
	}
	if (rez == -1)
		return (-1);
	if (rez == 0 && ft_strlen(lala) == 0)
		return (0);
	*line = lala;
	return (1);
}
