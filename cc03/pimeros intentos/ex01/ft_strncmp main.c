/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:02:31 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/16 11:47:20 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n)
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		{
			i++;
		}
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("%d\n", ft_strncmp("holaa", "holaa", 2));
	printf("%d\n", ft_strncmp("holaa123456", "holaz123456", 4));
	printf("%d\n", ft_strncmp("he31", "holaa31", 2));
}
