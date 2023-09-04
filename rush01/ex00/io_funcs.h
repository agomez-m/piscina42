/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_funcs.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:15:12 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:15:14 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_FUNCS_H
# define IO_FUNCS_H

int		is_input_valid(char *args);
void	write_sol_to_stdout(short int solu_grid[][4]);
void	str_split_to_int(short int *vpts, char *args);
#endif
