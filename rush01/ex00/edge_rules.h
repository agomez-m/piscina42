/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edge_rules.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:58:37 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 17:58:42 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EDGE_RULES_H
# define EDGE_RULES_H

void	apply_edge_rules(short int solu_grid[][4], short int *vpts);
void	apply_edge_rules1(short int solu_grid[][4], short int *vpts);
void	apply_edge_rules4(short int solu_grid[][4], short int *vpts);
void	change_col_rules4(short int solu_grid[][4], int col_num, int mode);
void	change_row_rules4(short int solu_grid[][4], int row_num, int mode);
#endif
