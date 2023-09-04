/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:41:02 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/15 20:09:19 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (*(s1 + i) == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main ()
{
	ft_strcmp(ptr)
	printf("%d\n", ft_strcmp("hola", "hola"));
	printf("%d\n", ft_strcmp("hel", "hello"));
	printf("%d\n", ft_strcmp("hola277", "hola"));
	printf("%d\n", ft_strcmp("hello", "eweew"));
	return (0);
}
/*
hello0
weeew0
*/

int *ptr
int num

num = 32
ptr = &num[0]

*ptr = 42