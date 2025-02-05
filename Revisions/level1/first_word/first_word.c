/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:58:50 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/05 20:33:03 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str, int max)
{
	int	i;

	i = 0;
	while (i <= max)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	is_space(char c)
{
	int i;

	i = 0;
	if ((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}

void	first_word_finder(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_space(str[i + 1]))
		{
			ft_putstr(str, i);
			return ;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		first_word_finder(av[1]);
	ft_putchar('\n');
	return (0);
}
