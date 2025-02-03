/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:31:34 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/20 21:18:05 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[0] = str[i] - 32;
			else
			{
				if (!((str[i - 1] >= '0' && str[i - 1] <= '9')
						|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
						|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
