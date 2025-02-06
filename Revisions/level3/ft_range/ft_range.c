/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:35:45 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/06 15:13:34 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*tab;
	
	range = max - min;
	if (range <= 0)
		return NULL;
	tab = (int *) malloc (range * sizeof(int));
	if (!tab)
		return NULL;
	i = 0;
	while (i < range)
	{
		tab[i] = min + i;
		printf("%d\n", tab[i]);
		i++;
	}
	return (tab);
}


int	main(int ac, char **av)
{
	int *res;
	int range;

	range = atoi((av[2]) - atoi(av[1]));
	res = (int *) malloc (range * sizeof(int));
	if (!res)
		return -1;
	if (ac <= 3)
	{
		{
			res = ft_range(atoi(av[1]), atoi(av[2]));
			printf("%d\n", *res);
		}
	}
	free(res);
}
