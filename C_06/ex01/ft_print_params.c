/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:43:15 by encastil          #+#    #+#             */
/*   Updated: 2022/08/28 17:36:26 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	count;
	int	argnbr;

	count = 0;
	argnbr = 1;
	while (argnbr < argc)
	{
		while (argv[argnbr][count] != '\0')
		{
			ft_putchar(argv[argnbr][count]);
			count++;
		}
		ft_putchar('\n');
		argnbr++;
		count = 0;
	}
	return (0);
}
