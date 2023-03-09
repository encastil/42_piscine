#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	out;

	out = ft_strcmp(argv[1], argv[2]);
	printf("%d\n", out);
	return (0);
}
