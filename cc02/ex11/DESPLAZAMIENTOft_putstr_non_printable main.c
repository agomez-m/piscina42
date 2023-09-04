/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DESPLAZAMIENTOft_putstr_non_printable main.        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:45:54 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/15 15:07:08 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr_non_printable(char *str)
{
	char	hexdig[];
	char 	hexrep[3];
	int		i;
	
	hexdig = "0123456789ABCDEF";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			hexrep[0] = '\\';
			hexrep[1] = hexdig[(str[i] >> 4) & 0x0F];
			hexrep[2] = hexdig[str[i] & 0x0F];
			hexrep[2] = hexrep[2] + 32;
			write(1, hexrep, 3);
		}
		else
		{
			write(1, &str[i],  1);
		}
		i++;
	}
}
	
int main()
{
	char	text[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(text);
	printf("\n");
	return 0;
}
