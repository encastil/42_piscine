#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb);

int	main(int argc, char **argv)
{
	int	x;
	int	arg_1;
	int	out;
	
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
		out = ft_iterative_factorial(arg_1);
		printf("%d\n", out);
	}
	return (0);
}
