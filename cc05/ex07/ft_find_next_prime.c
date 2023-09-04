/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:11:10 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/21 14:15:48 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb ++;
	}
	return (0);
}

int	main(void)
{
	printf("%i\n", ft_find_next_prime(5));
	printf("%i\n", ft_find_next_prime(2147483647));
	printf("%i\n", ft_find_next_prime(200000000));
	printf("%i\n", ft_find_next_prime(50000));
}

