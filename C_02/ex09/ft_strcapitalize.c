/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: encastil <encastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:18:46 by encastil          #+#    #+#             */
/*   Updated: 2022/08/31 16:17:03 by encastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (65 <= str[x] && str[x] <= 90)
			str[x] += 32;
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	caps;

	x = 0;
	caps = 1;
	ft_lowercase(str);
	while (str[x] != '\0')
	{
		if (97 <= str[x] && str[x] <= 122)
		{
			if (caps == 1)
				str[x] -= 32;
			caps = 0;
		}
		else if (48 <= str[x] && str[x] <= 57)
			caps = 0;
		else
			caps = 1;
		x++;
	}
	return (str);
}
