/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 19:34:47 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/19 12:33:34 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	is_last_column_border_line(int c, int x, int l)
{
	if (x == 1)
	{
		if (l == 0)
			ft_putchar('/');
		else
			ft_putchar('\\');
		ft_putchar('\n');
	}
	else if (c > 0 && c < x - 1)
		ft_putchar('*');
	else if (c == 0)
	{
		if (l == 0)
			ft_putchar('/');
		else
			ft_putchar('\\');
	}
	else if (c == x - 1)
	{
		if (l == 0)
			ft_putchar('\\');
		else
			ft_putchar('/');
		ft_putchar('\n');
	}
}

void	is_last_column_middle_line(int c, int x)
{
	if (x == 1)
	{
		ft_putchar('*');
		ft_putchar('\n');
	}
	else if (c == 0)
		ft_putchar('*');
	else if (c > 0 && c < x - 1)
		ft_putchar(' ');
	else if (c == x - 1)
	{
		ft_putchar('*');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 0;
	c = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			if (l == 0 || l == y - 1)
			{
				is_last_column_border_line(c, x, l);
			}
			if (l > 0 && l < y - 1)
			{
				is_last_column_middle_line(c, x);
			}
			c++;
		}
		l++;
	}
}
