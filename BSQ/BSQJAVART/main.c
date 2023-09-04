/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:10:01 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 10:18:29 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lib>

int main (int ac, char **av)
{
    int index;
    
    index = 0;
    ac = ac - 1; 
    av = av + 1;
    while (index < ac)
    {
        ft_proces(ac, av[index]);
        if (index < ac -1)
            ft_putchar('\n');
        index++;
    }
    if (!ac)
        ft_proces(ac, av[index]);
    return (0);
}

/*
ac = ac - 1; para obviar el primer parametro 
av = av + 1; para que apunte al siguiente arg
*/