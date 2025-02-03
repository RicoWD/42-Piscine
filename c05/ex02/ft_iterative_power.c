/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:07:17 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/28 23:02:24 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power--)
	{
		r = r * nb;
	}
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 8;

	printf("%d\n", ft_iterative_power(nb, power));
}*/
