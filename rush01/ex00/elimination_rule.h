/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elimination_rule.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:04:24 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:04:26 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELIMINATION_RULE_H
# define ELIMINATION_RULE_H

void	apply_elimination_rule(short int solu_grid[][4],
			short int possi_grid[][4]);
void	apply_exclusivity_row(short int solu_grid[][4],
			short int possi_grid[][4], int row_ind);
void	apply_exclusivity_row_bit(short int solu_grid[][4],
			short int possi_grid[][4], int row_ind, int bit_ind);
void	apply_exclusivity_col(short int solu_grid[][4],
			short int possi_grid[][4], int col_ind);
void	apply_exclusivity_col_bit(short int solu_grid[][4],
			short int possi_grid[][4], int col_ind, int bit_ind);
#endif
