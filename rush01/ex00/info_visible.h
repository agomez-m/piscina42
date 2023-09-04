/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_visible.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:18:08 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:18:10 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_VISIBLE_H
# define INFO_VISIBLE_H

int	get_visible_num(short int solu_grid[][4], int vpts_ind);
int	get_visible_col(short int solu_grid[][4], int vpts_ind, int dir);
int	get_visible_row(short int solu_grid[][4], int vpts_ind, int dir);
#endif
