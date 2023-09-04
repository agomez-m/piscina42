/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_hidden.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:08:11 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:08:13 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HIDDEN_H
# define INFO_HIDDEN_H

int	get_hidden_num(short int solu_grid[][4], int vpts_ind);
int	get_hidden_num_col(short int solu_grid[][4], int vpts_ind, int dir);
int	get_hidden_num_row(short int solu_grid[][4], int vpts_ind, int dir);
#endif
