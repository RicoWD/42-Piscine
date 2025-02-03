/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:46:52 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/02 11:55:14 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char 	*cpy;
	char	len_str;
	int		i;

	len_str = ft_strlen(str);
	cpy = (char *) malloc ((len_str + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len_str)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}


struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str	*stock;
	
	stock = (t_stock_str *) malloc (ac * sizeof(t_stock_str));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	int i;
	
	t_stock_str	*stock = ft_strs_to_tab(ac, av);
	i = 1;
	while (i < ac)
	{
		printf("Size : %d\n", stock[i].size);
		printf("Str : %s\n", stock[i].str);
		printf("Copy ; %s\n", stock[i].copy);
		i++;
	}
	free(stock);
}
