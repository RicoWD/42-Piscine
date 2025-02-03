/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:28:42 by erpascua          #+#    #+#             */
/*   Updated: 2025/01/26 20:36:57 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	col_row_link(int nb, int min_itv);
int		ft_atoi(char *str);
void	structure(char *str);
void	number_extract(char *str, int min_itv, int max_itv);

#endif
