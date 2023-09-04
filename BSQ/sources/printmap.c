/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:51:28 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 18:48:00 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	print_map(t_map map)
{
	int		i;
	char	*line;
	size_t	len;
	ssize_t	bytes_written;

	i = 0;
	while (map.matrix[i] != NULL)
	{
		line = map.matrix[i];
		len = ft_strlen(line);
		bytes_written = write(1, line, len);
		if (bytes_written == -1)
			break ;
		write(1, "\n", 1);
		i++;
	}
}
