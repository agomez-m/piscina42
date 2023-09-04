/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_solve.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:10:39 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:10:41 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_SOLVE_H
# define INFO_SOLVE_H

int	is_solved(short int solu_grid[][4]);
int	is_unsolvable(short int possi_grid[][4]);
int	is_solution_valid(short int solu_grid[][4], short int *vpts);
#endif
