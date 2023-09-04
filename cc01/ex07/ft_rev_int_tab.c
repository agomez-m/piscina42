/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:38:05 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/12 03:11:26 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	cambio;

	i = 0;
	while (i < size / 2)
	{
		cambio = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = cambio;
		i ++;
	}
}
