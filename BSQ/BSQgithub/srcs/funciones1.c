/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:02:49 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/22 15:02:50 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	while (ft_is_printable(str[i]))
		i++;
	i--;
	j = 0;
	while (str[i] && j < 2)
	{
		i--;
		j++;
	}
	j = 0;
	nb = 0;
	while (ft_is_number(str[j]) && j < i)
	{
		nb = nb * 10 + str[j] - '0';
		j++;
	}
	return (nb);
}