/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:11:00 by encastil          #+#    #+#             */
/*   Updated: 2022/08/16 17:55:41 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
