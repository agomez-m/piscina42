/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:04:58 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/14 17:18:59 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d", ft_str_is_alpha("ewrqwerq"));
	printf("\n%d", ft_str_is_alpha("a2341234"));
	printf("\n%d", ft_str_is_alpha("-_5regwerg"));
	printf("\n%d", ft_str_is_alpha("sfbrsgnsrgfbsdf"));
	printf("\n%d", ft_str_is_alpha("bsgbsfgbsgsfgADSDS"));
	printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
	return (0);
}
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

