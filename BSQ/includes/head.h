/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:41:40 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/30 13:43:32 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H
# include "struct.h"
# include <stdlib.h>
# include <unistd.h>

int			x_size(char	**matrix);
int			y_size(char	*row);
t_map		fill_square(t_map map, t_square square);
int			square_size(t_square square);
int			check_square(t_map map, t_square square);
t_square	find_square(t_map map, t_square square, int x_start, int y_start);
void		print_map(t_map map);
void		print_largest_square(t_map map, t_square square);
t_map		ft_solver(t_map map);
char		*ft_strcpy(char *dest, char *src);
int			ft_strlen(char *str);
char		**create_map_matrix(char *rows[]);
t_map		initialize_map(void);

#endif