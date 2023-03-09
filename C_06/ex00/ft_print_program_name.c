/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:17:26 by encastil          #+#    #+#             */
/*   Updated: 2022/08/28 18:14:54 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		count;

	(void) argc;
	count = 0;
	while (argv[0][count] != '\0')
	{
		ft_putchar(argv[0][count]);
		count++;
	}
	ft_putchar('\n');
	return (0);
}
