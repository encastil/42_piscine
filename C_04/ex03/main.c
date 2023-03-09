#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int out;

	(void) argc;
	out = ft_atoi(argv[1]);
	printf("%d\n", out);
	return (0);
}
