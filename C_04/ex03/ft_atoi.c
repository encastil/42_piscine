/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:47:13 by encastil          #+#    #+#             */
/*   Updated: 2022/08/28 16:47:01 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		count;
	int		neg;
	int		out;

	count = 0;
	neg = 1;
	out = 0;
	while (((9 <= str[count] && str[count] <= 13) || str[count] == 32)
		&& str[count] != '\0')
		count++;
	while ((str[count] == 43 || str[count] == 45) && str[count] != '\0')
	{
		if (str[count] == 45)
			neg *= -1;
		count++;
	}
	while ((48 <= str[count] && str[count] <= 57) && str[count] != '\0')
	{
		out *= 10;
		out += str[count] - 48;
		count++;
	}
	out *= neg;
	return (out);
}
