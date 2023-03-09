/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:14:20 by encastil          #+#    #+#             */
/*   Updated: 2022/09/01 19:03:04 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	x;
	int				temp;

	x = 1;
	len -= 1;
	while (x < len)
	{
		if (tab[x] < tab[x + 1])
		{
			temp = tab[x];
			tab[x] = tab[x + 1];
			tab[x + 1] = temp;
			x = -1;
		}
		x++;
	}
	return (tab[0]);
}
