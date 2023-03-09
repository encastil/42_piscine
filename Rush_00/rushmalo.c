/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillado <evillado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:45:34 by evillado          #+#    #+#             */
/*   Updated: 2022/08/13 12:53:12 by evillado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UPPER_LEFT_CORNER 'o'
#define UPPER_RIGHT_CORNER 'o'
#define LOWER_LEFT_CORNER 'o'
#define LOWER_RIGHT_CORNER 'o'
#define ROW_CHARACTER '-'
#define COLUMN_CHARACTER '|'

void	ft_putchar(char c);
void	conditions(int x, int y, int col, int row);

void	rush(int x, int y)
{
	int	row;
	int	col;

	col = 0;
	if (x > 0 && y > 0)
	{
		while (col < y)
		{
		row = 0;
			while (row < x)
			{
				conditions(x, y, col, row);
				row++;
			}
			ft_putchar('\n');
			col++;
		}	
	}
	else
		ft_putchar(0);
}

void	conditions(int x, int y, int col, int row)
{
	if (col == 0 && row == 0)
		ft_putchar(UPPER_LEFT_CORNER);
	else if (col == y - 1 && row == 0)
		ft_putchar(UPPER_RIGHT_CORNER);
	else if (col == 0 && row == x - 1)
		ft_putchar(LOWER_LEFT_CORNER);
	else if (col == y - 1 && row == x - 1)
		ft_putchar(LOWER_RIGHT_CORNER);
	else if ((col > 0 && col < y - 1) && (row == 0 || row == x - 1))
		ft_putchar(COLUMN_CHARACTER);
	else if ((row > 0 || row < x - 1) && (col == 0 || col == y - 1))
		ft_putchar(ROW_CHARACTER);
	else
		ft_putchar(' ');
}
