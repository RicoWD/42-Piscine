/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:23:44 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/02 18:11:41 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < (nb))
	{
		if (nb % i != 0)
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		nb++;
	return (ft_find_next_prime(nb));
}
/*
#include <stdio.h>
#include <stdlib.h>


int	main(int ac, char **av)
{
	(void)ac;
	printf("Le plus proche entier de %s est %d\n", av[1], ft_find_next_prime(atoi(av[1])));
}*/
