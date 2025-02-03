/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:47:00 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/01 21:24:12 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == 32 || (c > 8 && c < 14))
		return (1);
	return (0);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || is_space(base[i]))
			return (-1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (-1);
			j++;
		}
		i++;
	}
	return (i);
}

int	seek_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	get_nb_base(char *nb, char *base, int base_len)
{
	long	val;
	int		i;
	int		j;
	long	n;
	int		len;

	len = 0;
	while (nb[len])
		len++;
	val = 0;
	i = 0;
	while (i < len)
	{
		n = seek_nb(nb[i], base);
		if (n == -1)
			return (val);
		j = i;
		val = val * base_len + n;
		i++;
	}
	return (val);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	base_len;

	if (!str || !*str || !*base || !base)
		return (0);
	base_len = is_base_valid(base);
	if (base_len <= 1)
		return (0);
	result = 0;
	sign = 1;
	while (*str && is_space(*str))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = get_nb_base(str, base, base_len);
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	//char     nbr = "1234";
	//char    str1[] = "   ---+--+1234ab567";

	char    deci_base[] = "0123456789";
	char    binary_base[] = "01";
	char    hexa_base[] = "0123456789ABCDEF";
	char    poney_base[] = "poneyvif";
	char    fake_base1[] = "fakebase";
	char    fake_base2[] = "fkeba se";
	char    fake_base3[] = "";
	char    fake_base4[] = "1";

	printf("%d\n", is_base_valid(deci_base));
	printf("%d\n", is_base_valid(binary_base));
	printf("%d\n", is_base_valid(hexa_base));
	printf("%d\n", is_base_valid(poney_base));
	printf("%d\n", is_base_valid(fake_base1));
	printf("%d\n", is_base_valid(fake_base2));
	printf("%d\n", is_base_valid(fake_base3));
	printf("%d\n", is_base_valid(fake_base4));

	printf("%d\n", ft_atoi_base("123a12", deci_base));
	printf("%d\n", ft_atoi_base("-1234", hexa_base));
	printf("%d\n", ft_atoi_base("4589F45", hexa_base));
	printf("%d\n", ft_atoi_base("ypo", poney_base));
}*/
