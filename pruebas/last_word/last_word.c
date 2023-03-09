/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:51:21 by encastil          #+#    #+#             */
/*   Updated: 2022/09/01 16:01:33 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] <= 32 && 32 < argv[1][i + 1])
				temp = &argv[1][i + 1];
			i++;
		}
		i = 0;
		while (temp && temp[i] > 32)
		{
			write(1, &temp[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
