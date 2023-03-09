#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	int	out;

	out = ft_strncmp(argv[1], argv[2], 3);
	printf("%d\n", out);
	return (0);
}
