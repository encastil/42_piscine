#include	<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	*ch;

	ch = ft_strcpy(argv[1], argv[2]);
	printf("%s\n", ch);

	return (0);
}
