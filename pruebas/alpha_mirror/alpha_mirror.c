/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:54:24 by encastil          #+#    #+#             */
/*   Updated: 2022/08/31 18:19:45 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_alpha_mirror(char *str)
{
	int	x;
	int	y;

	x = 0;
	while (str[x] != '\0')
	{
		if ('a' <= str[x] && str[x] <= 'm')
			str[x] = 122 - (str[x] - 97);
		else if ('n' <= str[x] && str[x] <= 'z')
			str[x] = 97 + (122 - str[x]);
		else if ('A' <= str[x] && str[x] <= 'M')
			str[x] = 90 - (str[x] - 65);
		else if ('N' <= str[x] && str[x] <= 'Z')
			str[x] = 65 + (97 - str[x]);
		ft_putchar(str[x]);
		x++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_alpha_mirror(argv[1]);
	ft_putchar('\n');
}
