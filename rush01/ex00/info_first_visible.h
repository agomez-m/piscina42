/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_first_visible.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:07:18 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:07:20 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_FIRST_VISIBLE_H
# define INFO_FIRST_VISIBLE_H

int	get_first_visible_height(short int solu_grid[][4], int vpts_ind);
int	get_first_visible_height_col(short int solu_grid[][4], int vpts_ind);
int	get_first_visible_height_row(short int solu_grid[][4], int vpts_ind);
#endif
