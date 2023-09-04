/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DESPLAZAMIENTOft_putstr_non_printable.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:45:54 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/15 15:12:50 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hexdig[];
	char	hexrep[];
	int		i;
	
	i = 0;
	while (str[i] != '\0')
	{
		hexdig[] = "0123456789ABCDEF";
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
			write(1, &str[i], 1);
		}
		i++;
	}
}
