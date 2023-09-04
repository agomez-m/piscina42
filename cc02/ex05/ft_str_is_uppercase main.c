/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:36:52 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/14 17:38:52 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%d", ft_str_is_uppercase("1241251235134"));
	printf("\n%d", ft_str_is_uppercase("afsadffgsdfg"));
	printf("\n%d", ft_str_is_uppercase("ASDGFASD"));
	printf("\n%d", ft_str_is_uppercase("sfbrsgnsrgfbsdf"));
	printf("\n%d", ft_str_is_uppercase("bsgbsfgbsgsfgADSDS"));
	printf("\n%d", ft_str_is_uppercase("-_134556efghij67"));
    printf("\n%d", ft_str_is_uppercase("65463456356345"));
    printf("\n%d", ft_str_is_uppercase("ADSSDS"));
	return (0);
}
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}