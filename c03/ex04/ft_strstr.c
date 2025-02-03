/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:37:32 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/23 19:42:44 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	if (!to_find[0])
		return (str);
	while (to_find[len])
		len++;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] && str[i + j])
		{
			j++;
			if (j == len)
				return (str + i);
		}
		i++;
	}
	return (0);
}
