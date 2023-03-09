#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
