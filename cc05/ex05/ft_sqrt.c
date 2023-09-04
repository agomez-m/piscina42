/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:19:52 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/21 13:10:06 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	b;

	b = nb;
	i = 2;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	if (b >= 2)
	{
		while (i * i <= b)
		{
			if (i * i == b)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(21474836));
	printf("%d", ft_sqrt(2147483647);
	printf("%d", ft_sqrt(16810000));
}
*/
/*
Si el cuadrado es menor que nb, sabemos que la raíz
 cuadrada debe estar en la mitad superior del rango,
  por lo que actualizamos low para que sea mid + 1.
   Si el cuadrado es mayor que nb, sabemos que 
   la raíz cuadrada debe estar en la mitad inferior 
   del rango, por lo que actualizamos high para que 
   sea mid - 1.
*/