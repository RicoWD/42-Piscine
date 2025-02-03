/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:23:44 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/02 17:25:31 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < ((nb)))
	{
		if (nb % i != 0)
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	printf("is prime ||1|| ? || %d ||\n", ft_is_prime(2));
	printf("is prime ||1|| ? || %d ||\n", ft_is_prime(3));
	printf("is prime ||0|| ? || %d ||\n", ft_is_prime(4));
	printf("is prime ||1|| ? || %d ||\n", ft_is_prime(5));
	printf("is prime ||0|| ? || %d ||\n", ft_is_prime(6));
	printf("is prime ||1|| ? || %d ||\n", ft_is_prime(7));
	printf("is prime ||0|| ? || %d ||\n", ft_is_prime(8));
	printf("is prime ||0|| ? || %d ||\n", ft_is_prime(-15));
	printf("is prime ||0|| ? || %d ||\n", ft_is_prime(-10));
	printf("is prime ||1|| ? || %d ||\n", ft_is_prime(-11));
}
