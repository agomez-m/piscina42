/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_estructuras.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:25:47 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 10:31:28 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#indef FT_ESTRUCTURAS_H
# define FT_ESTRUCTURAS_H

typedef struct s_mapa
{
    char vacio;
    char obstaculos;
    char lleno;
    char **matriz;
    int valido;
}   t_mapa;

typedef struct s_cuad
{
    int x_s;
    int y_s;
    int x_e;
    int y_e;
}   t_cuad;

#endif