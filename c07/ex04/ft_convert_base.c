/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:06:53 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/05 17:06:13 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char c);

int	is_base_valid(char *base);

int	seek_nb(char c, char *base);

int	get_nb_base(char *nb, char *base, int base_len);

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

int	nbr_len(long nb, int base_len)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		nb /= base_len;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int nbr, int base_len, char *base)
{
	char	*buffer;
	long	nb;
	int		len;
	int		sign;

	nb = (long)nbr;
	sign = (nb < 0);
	len = nbr_len(nb, base_len);
	buffer = (char *) malloc ((len + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	buffer[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (len > sign)
	{
		len--;
		buffer[len] = base[nb % base_len];
		nb /= base_len;
	}
	if (sign)
		buffer[0] = '-';
	return (buffer);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_from;
	char	*nbr_to;
	int		base_len_nbr_to;

	if ((is_base_valid(base_from) <= 1 || is_base_valid(base_to) <= 1))
		return (0);
	base_len_nbr_to = is_base_valid(base_to);
	nbr_from = ft_atoi_base(nbr, base_from);
	nbr_to = ft_itoa_base(nbr_from, base_len_nbr_to, base_to);
	return (nbr_to);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*res = ft_convert_base(av[1], av[2], av[3]);
	
	if (ac == 4)
		printf("RESULT %s\n", res);
	free(res);
}*/
