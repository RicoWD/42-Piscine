/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:28:37 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/06 11:51:01 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_capitalize(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= "A" && str[i] <= 'Z')
		{
			str += 32;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
		while (av[i])
		{
			str_capitalizer(av[i]);
			i++;
		}
}
