/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:19:26 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 10:21:45 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_error(void)
	write (2, "Error\n", 6);

void	ft_error_map(void)
	write (2, "map error\n", 10);

void	ft_exit(void)
{
	ft_error_map();
	exit(1);
}

/*
stdin (descriptor de archivo 0): Se utiliza para la entrada estándar, generalmente 
el teclado. Los programas leen datos desde este descriptor.
stdout (descriptor de archivo 1): Se utiliza para la salida estándar, generalmente 
la pantalla. Los programas escriben datos en este descriptor.
stderr (descriptor de archivo 2): Se utiliza para la salida de error estándar, generalmente
 también la pantalla. Sin embargo, se utiliza para mensajes de error 
 y otra información de diagnóstico. 
*/