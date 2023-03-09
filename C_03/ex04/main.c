#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{
	char	*out;

	out = ft_strstr(argv[1], argv[2]);
	printf("%s\n", out);
	return (0);
}
