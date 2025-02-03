/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_LE_VRAI.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:54:07 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/02 20:55:56 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	glob_len_calc(int size, char **strs, char *sep)
{
	int	glob_len;
	int	sep_len;
	int	i;

	glob_len = 0;
	i = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		glob_len += ft_strlen(strs[i]);
		i++;
	}
	glob_len = glob_len + (sep_len * (size - 1));
	return (glob_len);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		str = NULL;
		return (str);
	}
	str = (char *)malloc((glob_len_calc(size, strs, sep) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	str[glob_len_calc(size, strs, sep)] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int		size = 7;
	char	*strs[] = {"hello", "je", "vais", "vous", "peter", "la", "rondelle"};
	char	*sep = " rondelle ";
	char	*res= ft_strjoin(size, strs, sep);

	printf("%s\n", res);
	free(res);
}*/
