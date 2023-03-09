#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	out;

	out = ft_strlen(argv[1]);
	printf("%d\n", out);
	return (0);
}
