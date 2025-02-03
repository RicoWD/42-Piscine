/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 10:21:24 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/17 21:25:35 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	a;
	int	z;

	a = 0;
	z = size - 1;
	while (a < z)
	{
		tmp = tab[a];
		tab[a] = tab[z];
		tab[z] = tmp;
		a++;
		z--;
	}
}
