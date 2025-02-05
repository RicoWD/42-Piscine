/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:43:35 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/05 12:12:56 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_strcpy(char *dest, char *src, int end)
{
	int	i;

	i = 0;
	while (i < end)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	tab_size(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

void	executor(char *str, char *charset, char **tab)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			start = i;
			while (str[i] && !is_sep(str[i], charset))
				i++;
			tab[j] = (char *)malloc((i - start + 1) * sizeof(char));
			if (!tab[j])
				return ;
			ft_strcpy(tab[j], &str[start], (i - start));
			j++;
		}
	}
	tab[j] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = (char **)malloc((tab_size(str, charset) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	executor(str, charset, tab);
	return (tab);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	**tab = ft_split(av[1], av[2]);
	int		i = 0;

	if (ac == 1)
		return 1;
	if (ac == 3)
	{
		while (tab[i])
		{
			printf("%s\n", tab[i]);
			i++;
		}
	}
	free(tab[i]);
}*/
