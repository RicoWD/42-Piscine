/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:16:59 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/01 20:58:19 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == '+' || base[i] == '-' || base[i] == base[j])
				return (0);
			if (base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	int	sign;

	base_len = is_base_valid(base);
	sign = 1;
	if (base_len == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		sign *= -1;
	}
	if (nbr <= -base_len || nbr >= base_len)
		ft_putnbr_base(sign *(nbr / base_len), base);
	ft_putchar(base[sign * (nbr % base_len)]);
}
/*
#include <stdio.h>
int	main(void)
{
	int		nbr = 12345;
	char	deci_base[] = "0123456789";
	char	binary_base[] = "01";
	char	hexa_base[] = "0123456789ABCDEF";
	char	poney_base[] = "poneyvif";
	char	fake_base1[] = "fakebase";
	char	fake_base2[] = "fkeba se";
	char	fake_base3[] = "";
	char	fake_base4[] = "1";

	printf("%d\n", is_base_valid(deci_base));
	printf("%d\n", is_base_valid(binary_base));
	printf("%d\n", is_base_valid(hexa_base));
	printf("%d\n", is_base_valid(poney_base));
	printf("%d\n", is_base_valid(fake_base1));
	printf("%d\n", is_base_valid(fake_base2));
	printf("%d\n", is_base_valid(fake_base3));
	printf("%d\n", is_base_valid(fake_base4));

	ft_putchar('\n');
	ft_putnbr_base(nbr, deci_base);
	ft_putchar('\n');
	ft_putnbr_base(nbr, binary_base);
	ft_putchar('\n');
	ft_putnbr_base(nbr, hexa_base);
	ft_putchar('\n');
	ft_putnbr_base(nbr, poney_base);
	ft_putchar('\n');
}*/
