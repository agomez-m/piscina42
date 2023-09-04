/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:31:21 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/14 17:34:02 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d", ft_str_is_lowercase("1241251235134"));
	printf("\n%d", ft_str_is_lowercase("afsadffgsdfg"));
	printf("\n%d", ft_str_is_lowercase("ASDGFASD"));
	printf("\n%d", ft_str_is_lowercase("sfbrsgnsrgfbsdf"));
	printf("\n%d", ft_str_is_lowercase("bsgbsfgbsgsfgADSDS"));
	printf("\n%d", ft_str_is_lowercase("-_134556efghij67"));
    printf("\n%d", ft_str_is_lowercase("65463456356345"));
    printf("\n%d", ft_str_is_lowercase("asd"));
	return (0);
}
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
