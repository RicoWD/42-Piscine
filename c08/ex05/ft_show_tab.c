/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:11:19 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/02 23:26:32 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strs_tab"

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

void	ft_show_tab(struct s_stock_str *par)
{
	while (*spar)
	{
		ft_putstr(par.size);
		ft_putstr(par.str);
		ft_pustrt(par.copy);
	}
}

int	main(int ac, char **av)
{
	ft_show_tab(ft_show_tab);
}
