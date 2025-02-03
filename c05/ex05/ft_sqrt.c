/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:34:05 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/29 21:34:34 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (result <= nb / 2)
	{
		if ((nb == result * result) && (nb % result == 0))
			return (result);
		result++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb = 9;

	printf("%d\n", ft_sqrt(nb));
}*/
