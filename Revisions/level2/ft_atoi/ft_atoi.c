/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:40:22 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/06 16:12:35 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-')
	{
		sign *= -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		printf("%d\n", atoi(av[i]));
		i++;
	}
}
