/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:47:47 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/21 12:57:19 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
int ft_is_prime(int nb);
int main ()
{
	printf("%i\n", ft_is_prime(5));
	printf("%i\n", ft_is_prime(11));
	printf("%i\n", ft_is_prime(29));
	printf("%i\n", ft_is_prime(23));
	printf("%i\n", ft_is_prime(13));
	printf("%i\n", ft_is_prime(21));
	printf("%i\n", ft_is_prime(7));
}
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
En lugar de verificar todos los números hasta nb, 
solo verifica números desde 2 hasta la raíz cuadrada de nb, 
lo que reduce la cantidad de operaciones y mejora el rendimiento
 al determinar si nb es primo o no.
*/