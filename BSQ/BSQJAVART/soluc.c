/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soluc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:24:03 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 10:48:14 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_mapa  ft_soluc (t_mapa mapa)
{
    int x;
    int y;
    int count;
    t_cuad  cuad;
    t_cuad  tmp;

    x = -1;
    count = 0;
    cuad.x_e = -1;
    cuad.x_s = 0;
    while (++x < x_size(mapa.matriz))
    {
        y = -1;
        while (++y < y_size (mapa.matriz))
        {
            tmp = busc_cuad(map, cuad, x, y);
            if (tmp.x_s != -1 && cuad_tam(tmp) > cuad_tam(cuad))
            {
                count++;
                cuad = mapa;
            }
        }
    }
    mapa = rell_cuad (mapa, cuad);
    return(mapa);
}

t_square    busc_cuad(t_mapa mapa, t_cuad cuad, int x_s, int y_s)
{
    t_cuad  nuevocuad;

    nuevocuad.x_s = x_s;
    nuevocuad.y_s = y_s;
    nuevocuad.x_e = x_s + cuad_tam(cuad);
    nuevocuad.y_e = y_s + cuad_tam(cuad);
    if (!comprobarcuad(mapa, nuevocuad))
    {
        nuevocuad.x_start = -1;
        return (nuevocuad);
    }
    while (comprobarcuad(mapa, nuevocuad))
    {
        nuevocuad.x_e++;
        nuevocuado.y_e++;
    }
    nuevocuad.x_e++;
    nuevocuado.y_e++;
    return(nuevocuad);
}
