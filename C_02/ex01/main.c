#include	<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(int argc, char **argv)
{
	unsigned int x;
	char	*ch;

	x = *argv[3] - 48;

	ch = ft_strncpy(argv[1], argv[2], x);
	printf("%s\n", ch);

	return (0);
}
