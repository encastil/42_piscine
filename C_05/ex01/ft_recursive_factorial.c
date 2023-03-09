/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:20:17 by encastil          #+#    #+#             */
/*   Updated: 2022/08/29 13:28:27 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	z;

	z = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		z = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (z);
}
