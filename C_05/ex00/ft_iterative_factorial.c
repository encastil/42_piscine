/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:33:20 by encastil          #+#    #+#             */
/*   Updated: 2022/08/29 13:15:04 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	z;

	z = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		z *= nb;
		nb--;
	}
	return (z);
}
