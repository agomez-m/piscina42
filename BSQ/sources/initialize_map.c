/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:12:34 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/30 13:22:44 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

t_map	initialize_map(void)
{
	t_map	map;

	map.obs = 'o';
	map.full = '.';
	return (map);
}
