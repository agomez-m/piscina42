/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:20:40 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/14 17:24:36 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d", ft_str_is_numeric("1241251235134"));
	printf("\n%d", ft_str_is_numeric("a2341234"));
	printf("\n%d", ft_str_is_numeric("65463456356345"));
	printf("\n%d", ft_str_is_numeric("sfbrsgnsrgfbsdf"));
	printf("\n%d", ft_str_is_numeric("bsgbsfgbsgsfgADSDS"));
	printf("\n%d", ft_str_is_numeric("-_134556efghij67"));
    printf("\n%d", ft_str_is_numeric("65463456356345"));
	return (0);
}
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
            i++;
		else
			return (0);
	}
	return (1);
}
