/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:06:46 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/28 12:58:11 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[7] = "x chars";

	printf("%d\n", ft_strlen(str));
}*/
