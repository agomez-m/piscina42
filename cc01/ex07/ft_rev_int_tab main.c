/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:38:05 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/12 03:05:17 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int cambio;
	
	i = 0;
	while (i < size / 2)
	{
		cambio = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = cambio;
		i ++;
	}
}

int main ()
{
	int tab[5] = {0, 1, 2, 3, 4};
	int size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
	


