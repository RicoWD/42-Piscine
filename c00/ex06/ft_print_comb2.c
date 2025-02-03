/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:10:08 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/16 15:45:36 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	assemblyer(int i, int j)
{
	ft_putchar((i / 10) + '0');
	ft_putchar((i % 10) + '0');
	ft_putchar(' ');
	ft_putchar((j / 10) + '0');
	ft_putchar((j % 10) + '0');
	if (i != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			assemblyer(i, j);
			j++;
		}
		i++;
	}
}
