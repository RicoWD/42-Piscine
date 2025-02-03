/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:06:53 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/03 17:24:24 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_space(char c)
{
	if (c == 32 || (c > 8 && c < 14))
		return (1);
	return (0);
}

int is_base_valid(char *base)
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

int seek_nb(char c, char *base)
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

int get_nb_base(char *nb, char *base, int base_len)
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

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char	*ft_putnbr_base(int nbr, char *base)
{
    int		base_len;
    int		sign;
	char	*str;
	int		i;

    base_len = is_base_valid(base);
    sign = 1;
	i = 0;
	str = (char *) malloc ((20) * sizeof(char));
    if (base_len == 0)
        return 0;
    if (nbr < 0)
    {
        ft_putchar('-');
        sign *= -1;
    }
    if (nbr <= -base_len || nbr >= base_len)
        ft_putnbr_base(sign *(nbr / base_len), base);
	while (str[i])
	{
		str[i] = base[sign * (nbr % base_len)];
		i++;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int 	nbr_from;
	char	*nbr_to;

	if ((is_base_valid(base_from) == -1 && is_base_valid(base_to) == -1))
		return ;
	nbr_to = (char *) malloc (20 * sizeof(char));
	nbr_from = ft_atoi_base(nbr, base_from);
	nbr_to = ft_putnbr_base(nbr_from, base_to);
	return (nbr_to);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	char *res = ft_convert_base(av[1], av[2], av[3]);
	if (ac == 4)
		printf("%s\n", res);
	free(res);

	(void)ac;
	ft_convert_base(av[1], av[2], av[3]);
}
