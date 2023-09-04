/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_rule.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:25:35 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:28:19 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_RULE_H
# define SUDOKU_RULE_H

void	apply_sudoku_rule(short int solu_grid[][4], short int possi_grid[][4]);
void	apply_sudoku_rule_val(short int solu_grid[][4], short int val);
void	write_sudoku_change(short int solu_grid[][4], short int val,
			short int row_has_num, short int col_has_num);
#endif
