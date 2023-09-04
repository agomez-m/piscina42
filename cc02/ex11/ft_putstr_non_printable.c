/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:45:54 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/15 18:46:58 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	na;
	char	nb;
	char	n;
	int		i;
	int		arr[12];
	
	i = 0;
	n = '\\';
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, &n, 1);
			na = ("0123456789ABCDEF"[str[i] / 16]);
			write(1, &na, 1);
			nb = ("0123456789abcdef"[str[i] % 16]);
			write(1, &nb, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
