#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	*out;

	out = ft_strcat(argv[1], argv[2]);
	printf("%s\n", out);
	return (0);
}
