/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_first_filled.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:05:49 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:05:50 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_FIRST_FILLED_H
# define INFO_FIRST_FILLED_H

int	get_index_first_filled(short int solu_grid[][4], int vpts_ind);
int	get_index_first_filled_col(short int solu_grid[][4], int vpts_ind);
int	get_index_first_filled_row(short int solu_grid[][4], int vpts_ind);
#endif
