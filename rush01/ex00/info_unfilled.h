/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_unfilled.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:11:51 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:11:53 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_UNFILLED_H
# define INFO_UNFILLED_H

int	get_unfilled_num(short int solu_grid[][4], int vpts_ind);
int	get_unfilled_num_col(short int solu_grid[][4], int vpts_ind);
int	get_unfilled_num_row(short int solu_grid[][4], int vpts_ind);
#endif
