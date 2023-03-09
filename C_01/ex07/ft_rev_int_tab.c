/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:05:50 by encastil          #+#    #+#             */
/*   Updated: 2022/08/16 19:23:41 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	y = size / 2;
	while (x < y)
	{
		temp = tab[x];
		tab[x] = tab[size - 1];
		tab[size - 1] = temp;
		x++;
		size--;
	}
}
