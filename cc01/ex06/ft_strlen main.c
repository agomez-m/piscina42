/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 01:58:39 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/12 02:33:27 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i  = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int main()
{
	char *cad;

	cad = "holaassssssss";
	printf("%d", ft_strlen(cad));
	return(0);
}
