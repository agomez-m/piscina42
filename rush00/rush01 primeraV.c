/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01 copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:23:47 by rmengiba          #+#    #+#             */
/*   Updated: 2023/08/13 19:42:09 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int x, int y)
{
    int tcol;
    int tfil;

    tfil = 1;
    while (tfil <= y)
    {
        tcol = 1;
        while (tcol <= x)
        {
            if ((tfil == 1 && tcol == 1) || (tcol == x && tfil == y))
            {
                ft_putchar('/');
            }
            if ((tfil == 1 && tcol == x) || (tcol == 1 && tfil == y))
            {
                ft_putchar('\\');
            }
            if ((tfil > 1 && tfil < y) && (tcol > 1 && tcol < x))
            {
                ft_putchar(' ');
            }
            if (!((tfil == 1 && tcol == 1) || (tfil == 1 && tcol == x) || (tcol == 1 && tfil == y) || (tcol == x && tfil == y)))
            {
                ft_putchar('*');
            }
            tcol++;
        }
        ft_putchar('\n');
        tfil++;
    }
}

