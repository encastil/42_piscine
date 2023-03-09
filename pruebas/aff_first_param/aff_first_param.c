/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:54:08 by encastil          #+#    #+#             */
/*   Updated: 2022/08/31 15:05:58 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	z;

	if (argc < 1)
		ft_putchar('\n');
	z = 0;
	if (argc > 1)
	{
		while (argv[1][z] != '\0')
		{
			ft_putchar(argv[1][z]);
			z++;
		}
		ft_putchar('\n');
	}
}
