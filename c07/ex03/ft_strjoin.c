/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:54:07 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/05 10:10:54 by erpascua         ###   ########.fr       */
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
	dest[len_dest] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total_len;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	total_len = glob_len_calc(size, strs, sep);
	str = (char *)malloc((total_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	str[total_len] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int		size = 6;
	char	*strs[] = {"voici", "un", "petit", "test", "de", "co"};
	char	*sep = " grosse ";
	char	*res= ft_strjoin(size, strs, sep);
	return (0);

	printf("%s\n", res);
	free(res);
}*/
