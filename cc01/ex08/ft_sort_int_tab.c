/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 03:09:03 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/12 03:10:05 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int    i;
    int    swap;

    while (size >= 0)
    {
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                swap = tab [i];
                tab[i] = tab [i + 1];
                tab [i + 1] = swap;
            }
            i++;
        }
        size--;
    }
}

