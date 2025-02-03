/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_raw_instructions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:29:43 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/26 20:37:56 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	*col_up(int nb)
{
	int	*col_up_values;

	col_up_values = malloc(4 * sizeof(int));
	col_up_values[0] = nb / 1000;
	col_up_values[1] = (nb % 1000) / 100;
	col_up_values[2] = (nb % 100) / 10;
	col_up_values[3] = nb % 10;
	return (col_up_values);
}

int	*col_down(int nb)
{
	int	*col_down_values;

	col_down_values = malloc(4 * sizeof(int));
	col_down_values[0] = nb / 1000;
	col_down_values[1] = (nb % 1000) / 100;
	col_down_values[2] = (nb % 100) / 10;
	col_down_values[3] = nb % 10;
	return (col_down_values);
}

int	*row_left(int nb)
{
	int	*row_left_values;

	row_left_values = malloc(4 * sizeof(int));
	row_left_values[0] = nb / 1000;
	row_left_values[1] = (nb % 1000) / 100;
	row_left_values[2] = (nb % 100) / 10;
	row_left_values[3] = nb % 10;
	return (row_left_values);
}

int	*row_right(int nb)
{
	int	*row_right_values;

	row_right_values = malloc(4 * sizeof(int));
	row_right_values[0] = nb / 1000;
	row_right_values[1] = (nb % 1000) / 100;
	row_right_values[2] = (nb % 100) / 10;
	row_right_values[3] = nb % 10;
	return (row_right_values);
}

void	col_row_link(int nb, int min_itv)
{
	if (min_itv == 0)
		col_up(nb);
	else if (min_itv == 8)
		col_down(nb);
	else if (min_itv == 16)
		row_left(nb);
	else if (min_itv == 24)
		row_right(nb);
}
/*
int	main(void)
{
	int	nb = 1234;

	col_up(nb);
	free(nb);
}*/
