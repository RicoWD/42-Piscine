/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:27:59 by erpascua          #+#    #+#             */
/*   Updated: 2025/02/03 20:59:50 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	nbr_len(int nb, int base_len)
{
	int	i;

	i = 1;
	while(nb >= base_len)
	{
		nb = nb / base_len;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int nbr, int base_len)
{
	char	*buffer;
	int		len;

	if (base_len < 2)
		return NULL;
	len = nbr_len(nbr, base_len);
	buffer = (char *) malloc ((len + 1) * sizeof(char));
	if (!buffer)
		return NULL;
	buffer[len] = '\0';
	while (len--)
	{
		buffer[len] = (nbr % base_len) + (nbr % base_len < 10 ? '0' : 'A' - 10);
		nbr = nbr / base_len;
	}
	return (buffer);
}

int main()
{
	int nb = 152;
	int	base_len = 2;
	char	*str;

	str = (char *) malloc (nbrlen(nb, base_len) + 1 * sizeof(char));
	str = ft_itoa_base(nb, str, base_len);

	printf("%s\n", str);
	free(str);
}
