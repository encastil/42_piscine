#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	ft_putnbr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
