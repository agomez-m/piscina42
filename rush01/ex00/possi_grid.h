/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possi_grid.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:17:41 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:23:54 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POSSI_GRID_H
# define POSSI_GRID_H

void	update_possi_grid(short int solu_grid[][4], short int possi_grid[][4]);
void	write_change_to_possi_grid(short int possi_grid[][4], int row_ind,
			int col_ind, short int val);
#endif
