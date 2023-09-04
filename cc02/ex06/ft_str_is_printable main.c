/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:42:52 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/14 19:24:55 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	printf("%d", ft_str_is_printable("1241251\0235134"));
	printf("\n%d", ft_str_is_printable("afsadffgsdfg"));
	printf("\n%d", ft_str_is_printable("ASDGFASD~"));
	printf("\n%d", ft_str_is_printable("sfb sgnsrgfbsdf"));
	printf("\n%d", ft_str_is_printable("bsgbsfg\rbsgsfgADSDS"));
	printf("\n%d", ft_str_is_printable("-_13455 \n 6efghij67"));
    printf("\n%d", ft_str_is_printable("654634563\r 56345"));
    printf("\n%d", ft_str_is_printable("asd"));
	return (0);
}
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
