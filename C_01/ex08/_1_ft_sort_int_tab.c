/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:30:04 by encastil          #+#    #+#             */
/*   Updated: 2022/08/17 13:17:43 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int		x;
	int		y;
	int		pos1;
	int		pos2;
	int		temp;

	x = 0;
	y = size - 1;

	while (x <= y)
	{
		pos1 = 0;
		pos2 = pos1 + 1;
		while (pos1 < y)
		{
			if (tab[pos2] <= tab[pos1])
			{
				temp = tab[pos1];
				tab[pos1] = tab[pos2];
				tab[pos2] = temp;
			}
			pos1++;
			pos2++;
		}
		y--;
	}
}
