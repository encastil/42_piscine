#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(int argc, char **argv)
{
	char	*out;

	out = ft_strncat(argv[1], argv[2], 3);
	printf("%s\n", out);
	return (0);
}
