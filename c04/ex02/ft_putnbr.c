/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:51:31 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/28 13:14:45 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}	
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
/*
int	main(void)
{
	int	nb1 = 1256332;
	int	nb2 = -12564;
	int	nb3 = 0;
	int	nb4 = 5;
	int	nb5 = -2147483648;
	
	ft_putnbr(nb1);
	ft_putchar('\n');
	ft_putnbr(nb2);
	ft_putchar('\n');
	ft_putnbr(nb3);
	ft_putchar('\n');
	ft_putnbr(nb4);
	ft_putchar('\n');
	ft_putnbr(nb5);
	ft_putchar('\n');
}*/
