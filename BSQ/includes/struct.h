/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:37:52 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/30 13:41:36 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_square
{
	int		x_start;
	int		y_start;
	int		x_end;
	int		y_end;
}	t_square;

typedef struct s_map
{
	char	**matrix;
	char	obs;
	char	full;
}	t_map;

#endif 
