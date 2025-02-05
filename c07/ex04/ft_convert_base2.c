/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:52:11 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/05 10:18:58 by erpascua         ###   ########.fr       */
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
		val = val * base_len + n;
		i++;
	}
	return (val);
}
