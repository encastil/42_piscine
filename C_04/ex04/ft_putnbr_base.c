/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:51:52 by encastil          #+#    #+#             */
/*   Updated: 2022/08/28 16:51:58 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_ctr_error(char *str)
{
	int	count1;
	int	count2;

	count1 = 0;
	while (str[count1] != '\0')
	{
		count2 = count1 + 1;
		if (str[count1] == 43 || str[count1] == 45)
			return (-1);
		while (str[count2] != '\0')
		{
			if (str[count1] == str[count2])
				return (-1);
			count2++;
		}
		count1++;
	}
	if (count1 <= 1)
		return (-1);
	return (count1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		nb;

	len = ft_ctr_error(base);
	nb = nbr;
	if (len != -1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
		else
			ft_putchar(base[nb]);
	}
}
