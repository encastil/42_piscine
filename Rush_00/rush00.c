/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillado <evillado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:45:34 by evillado          #+#    #+#             */
/*   Updated: 2022/08/14 11:25:54 by evillado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UPPER_LEFT_CORNER 'A'
#define UPPER_RIGHT_CORNER 'C'
#define LOWER_LEFT_CORNER 'C'
#define LOWER_RIGHT_CORNER 'A'
#define ROW_CHARACTER 'B'
#define COLUMN_CHARACTER 'B'

void	ft_putchar(char c);
void	conditions(int x, int y, int col, int row);

void	rush(int y, int x)
{
	int	row;
	int	col;

	row = 0;
	if (x > 0 && y > 0)
	{
		while (row < x)
		{
		col = 0;
			while (col < y)
			{
				conditions(x, y, row, col);
				col++;
			}
			ft_putchar('\n');
			row++;
		}	
	}
	else
		ft_putchar(0);
}

void	conditions(int x, int y, int row, int col)
{
	if (col == 0 && row == 0)
		ft_putchar(UPPER_LEFT_CORNER);
	else if (col == y - 1 && row == 0)
		ft_putchar(UPPER_RIGHT_CORNER);
	else if (col == 0 && row == x - 1)
		ft_putchar(LOWER_LEFT_CORNER);
	else if (col == y - 1 && row == x - 1)
		ft_putchar(LOWER_RIGHT_CORNER);
	else if ((row > 0 && row < x - 1) && (col == 0 || col == y - 1))
		ft_putchar(COLUMN_CHARACTER);
	else if ((col > 0 || col < y - 1) && (row == 0 || row == x - 1))
		ft_putchar(ROW_CHARACTER);
	else
		ft_putchar(' ');
}
