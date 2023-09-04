/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable main.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:45:54 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/23 17:41:19 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	char	na;
	char	nb;
	char	n;
	int		i;

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
	
int	main()
{
	char	text[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(text);
	printf("\n");
	char	text1[] = "Coucou\rtu v\nas bien ?";
	ft_putstr_non_printable(text1);
	printf("\n");
	return 0;
}
