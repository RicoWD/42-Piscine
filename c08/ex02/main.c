/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:48:14 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/01 15:11:32 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		printf("%d\n", ABS(atoi(av[i])));
		i++;
	}
}
