/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 00:08:04 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/04 14:11:35 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	itv;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	itv = max - min;
	*range = (int *)malloc(itv * sizeof(int));
	if (!*range)
	{
		range = NULL;
		return (-1);
	}
	while (i < itv)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (itv);
}
/*
#include <stdio.h>

int	main()
{
	int	i;
	int	*range;
	int	min = -100;
	int	max = 100;

	i = 0;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	while (i < (max - min))
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}*/
