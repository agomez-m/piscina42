/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 00:41:34 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/12 00:55:53 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 15;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod  = a % b;
	}
}

