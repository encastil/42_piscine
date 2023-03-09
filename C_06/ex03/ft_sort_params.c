/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:01:11 by encastil          #+#    #+#             */
/*   Updated: 2022/08/28 19:11:25 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
		x++;
	return (s1[x] - s2[x]);
}

int	main(int argc, char **argv)
{
	int	count1;
	int	count2;

	count1 = 1;
	while (count1 < argc - 1)
	{
		count2 = 1;
		while (count2 < argc - 1)
		{
			if (ft_strcmp(argv[count2], argv[count2 + 1]) > 0)
				ft_swap(&argv[count2], &argv[count2 + 1]);
			count2++;
		}
		count1++;
	}
	count2 = 1;
	while (count2 < argc)
	{
		ft_putstr(argv[count2]);
		ft_putchar('\n');
		count2++;
	}
	return (0);
}
