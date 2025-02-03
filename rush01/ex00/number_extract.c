/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_extract.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:37:33 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/26 20:34:13 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	number_extract(char *str, int min_itv, int max_itv)
{
	int		i;
	char	*tmp;
	int		j;

	i = min_itv;
	tmp = malloc((max_itv - min_itv + 1) * sizeof(char));
	j = 0;
	while (i <= max_itv)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
				tmp[j] = str[i];
				j++;
		}
		i++;
	}
	col_row_link(ft_atoi(tmp), min_itv);
	free(tmp);
}
/*
int	main(void)
{
	char	str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	int	min_itv = 0;
	int	max_itv = 6;

	number_extract(str, min_itv, max_itv);
}*/
