#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(int argc, char **argv)
{
	int	x;
	int	arg_1;

	arg_1 = 0;
	x = 0;
	if (argc > 1)
	{
		while (argv[1][x] != '\0')
		{
			if (48 <= argv[1][x] && argv[1][x] <= 57)
			{
				arg_1 *= 10;
				arg_1 += argv[1][x] - 48;
			}
			x++;
		}
		if (argv[1][0] == 45)
			arg_1 *= -1;
		ft_putnbr_base(arg_1, argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}