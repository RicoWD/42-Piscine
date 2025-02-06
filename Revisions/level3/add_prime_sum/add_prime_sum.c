/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:27:19 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/06 19:41:37 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (nb == 0 || nb == 1)
		return (0);
	while ((nb) > i)
	{
		if ((nb % i != 0))
			i++;
		else
			return (0);
	}
	return (1);
}

int	previous_prime(int nb)
{
	if (ft_is_prime(nb) != 0)
		return (nb);
	else
		nb--;
	return (previous_prime(nb));
}

int	atoi(char *str)
{
	int i;
	int	result;

	result = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	add_prime_sum(int nb)
{
	int	res;
	int	tmp;

	tmp = previous_prime(nb);
	res = 0;
	while (1)
	{
		res = res + previous_prime(tmp);
		tmp--;
		printf("RES ADD : %d\n", res);
		if (tmp == 2)
			return (res + 2);
	}
	return (res);
}

int	main()
{
	char boule[] = "9";
	printf("%d\n", add_prime_sum(atoi(boule)));
}
