/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vpts_rules2.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:30:02 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:30:04 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTS_RULES2_H
# define VPTS_RULES2_H

void	apply_vpts_rule2(short int solu_grid[][4], short int possi_grid[][4],
			short int *vpts);
void	apply_vpts_rule2_colup(short int solu_grid[][4],
			short int possi_grid[][4], int col_ind, short int vpts);
void	apply_vpts_rule2_coldown(short int solu_grid[][4],
			short int possi_grid[][4], int col_ind, short int vpts);
void	apply_vpts_rule2_rowleft(short int solu_grid[][4],
			short int possi_grid[][4], int row_ind, short int vpts);
void	apply_vpts_rule2_rowright(short int solu_grid[][4],
			short int possi_grid[][4], int row_ind, short int vpts);
#endif
