/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ep <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:24:35 by ep                #+#    #+#             */
/*   Updated: 2025/02/06 01:59:34 by ep               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	fizzbuzz(int nb)
{
	while (nb <= 100)
	{
		if ((nb % 3 == 0) && (nb % 5 == 0))
		{
			ft_putstr("fizzbuzz");
			ft_putchar('\n');
			nb++;
		}
		if (nb % 3 == 0)
		{
			ft_putstr("fizz");
			ft_putchar('\n');
			nb++;
		}
		if (nb % 5 == 0)
		{
			ft_putstr("buzz");
			ft_putchar('\n');
			nb++;
		}
		else
		{
			ft_putnbr(nb);
			ft_putchar('\n');
			nb++;
		}
	}
}

int	main(void)
{
	int	nb;

	nb = 1;
	fizzbuzz(nb);
}
