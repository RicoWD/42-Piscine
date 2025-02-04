/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:52:57 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/04 14:14:38 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*values;
	int	itv;
	int	nb;
	int	i;

	if (min >= max)
		return NULL;
	itv = max - min;
	values = (int *)malloc((itv) * sizeof(int));
	if (!values)
		return (NULL);
	nb = min;
	i = 0;
	while (i < itv)
	{
		values[i] = min + i;
		i++;
	}
	return (values);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min = -20;
	int	max = 100;
	int	i = 0;
	int	*values = ft_range(min, max);
	
	while (i < (max - min))
	{
		printf("%d\n", values[i]);
		i++;
	}
}*/
