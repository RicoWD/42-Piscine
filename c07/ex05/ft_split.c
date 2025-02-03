/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:43:35 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/03 15:25:27 by erpascua         ###   ########.fr       */
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
	while (i <= end)
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
		if (is_sep(str[i], charset) == 1)
			count++;
		i++;
	}
	if (is_sep(str[i - 1], charset) == 1)
		return (count);
	return (count + 1);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	tmp = 0;
	tab = (char **)malloc((tab_size(str, charset) + 1) * sizeof(char *));
	while (str[i])
	{
		if (is_sep(str[i], charset) == 1 && is_sep(str[i + 1], charset) == 0)
			tmp = i + 1;
		if (is_sep(str[i], charset) == 0 && is_sep(str[i + 1], charset) == 1)
		{
			tab[j] = (char *)malloc((i - tmp) * sizeof(char));
			ft_strcpy(tab[j], &str[tmp], (i - tmp));
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	char	**tab = ft_split(av[1], av[2]);
	int		i = 0;

	if (ac == 3)
	{
		while (tab[i])
		{
			printf("%s\n", tab[i]);
			free(tab[i]);
			i++;
		}
	}
	free(tab);
}
