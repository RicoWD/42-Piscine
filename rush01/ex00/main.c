/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:33:11 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/26 20:15:27 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	len_argv;
	int	i;

	len_argv = ft_strlen(argv[1]);
	i = 0;
	if (len_argv != 31 || argc < 1)
		return (1);
	while (argv[1][i])
	{
		if (argv[1][i] == ' ')
			if (!(argv[1][i - 1] >= '1' && argv[1][i -1] <= '4'))
				return (1);
		i++;
	}
	number_extract(argv[i], 0, 6);
	number_extract(argv[i], 8, 14);
	number_extract(argv[i], 16, 22);
	number_extract(argv[i], 24, 30);
	return (0);
}
