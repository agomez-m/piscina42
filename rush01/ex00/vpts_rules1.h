/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vpts_rules1.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:27:43 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:32:48 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTS_RULES1_H
# define VPTS_RULES1_H

void	apply_vpts_rule1(short int possi_grid[][4], short int *vpts);
void	apply_vpts_rule1_colup(short int possi_grid[][4], int col_ind,
			short int vpts);
void	apply_vpts_rule1_coldown(short int possi_grid[][4], int col_ind,
			short int vpts);
void	apply_vpts_rule1_rowleft(short int possi_grid[][4], int row_ind,
			short int vpts);
void	apply_vpts_rule1_rowright(short int possi_grid[][4], int row_ind,
			short int vpts);
#endif
