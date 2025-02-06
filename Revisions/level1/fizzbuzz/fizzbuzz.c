/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: ep <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:24:35 by ep                #+#    #+#             */
/*   Updated: 2025/02/06 01:59:34 by ep               ###   ########.fr       */
=======
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:43:44 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/06 00:02:15 by erpascua         ###   ########.fr       */
>>>>>>> 20fa684 (day -1)
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

<<<<<<< HEAD
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
=======
void	ft_putchar()
{
	write(1,&c, 1);
}

void	ft_putstr()
>>>>>>> 20fa684 (day -1)
{
	int	i;

	i = 0;
<<<<<<< HEAD
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
=======
	while(str)
}

int	fizzbuzz()
>>>>>>> 20fa684 (day -1)
