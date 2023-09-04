/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmengiba <rmengiba@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:23:47 by rmengiba          #+#    #+#             */
/*   Updated: 2023/08/13 18:21:36 by rmengiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_verify(int tcol, int tfil, int x, int y)
{
	if ((tfil == 1 && tcol == 1) || (tcol == x && tfil == y))
	{
		ft_putchar('/');
	}
	else if ((tfil == 1 && tcol == x) || (tcol == 1 && tfil == y))
	{
		ft_putchar('\\');
	}
	else if ((tfil > 1 && tfil < y) && (tcol > 1 && tcol < x))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	tcol;
	int	tfil;

	tfil = 1;
	while (tfil <= y)
	{
		tcol = 1;
		while (tcol <= x)
		{
			ft_verify(tcol, tfil, x, y);
			tcol ++;
		}
		ft_putchar('\n');
		tfil ++;
	}
}
