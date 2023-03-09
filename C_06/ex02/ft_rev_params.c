/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:45:05 by encastil          #+#    #+#             */
/*   Updated: 2022/08/28 20:16:15 by encastil         ###   ########.fr       */
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

	argnbr = argc - 1;
	while (argnbr > 0)
	{
		count = 0;
		while (argv[argnbr][count] != '\0')
		{
			ft_putchar(argv[argnbr][count]);
			count++;
		}
		ft_putchar('\n');
		argnbr--;
	}
	return (0);
}
