/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vpts_rules_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjien-ji <tjien-ji@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:46:11 by tjien-ji          #+#    #+#             */
/*   Updated: 2022/05/29 18:46:12 by tjien-ji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vpts_rules_main.h"
#include "vpts_rules1.h"
#include "vpts_rules2.h"
#include "vpts_rules3.h"
#include "vpts_rules4.h"
#include "vpts_rules5.h"
#include "elimination_rule.h"

void	apply_vpts_rules(short int solu_grid[][4], short int possi_grid[][4],
			short int *vpts)
{
	apply_vpts_rule1(possi_grid, vpts);
	apply_elimination_rule(solu_grid, possi_grid);
	apply_vpts_rule2(solu_grid, possi_grid, vpts);
	apply_elimination_rule(solu_grid, possi_grid);
	apply_vpts_rule3(possi_grid, vpts);
	apply_elimination_rule(solu_grid, possi_grid);
	apply_vpts_rule4(solu_grid, possi_grid, vpts);
	apply_elimination_rule(solu_grid, possi_grid);
	apply_vpts_rule5(solu_grid, possi_grid, vpts);
	apply_elimination_rule(solu_grid, possi_grid);
}
