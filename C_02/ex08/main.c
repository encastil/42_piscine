#include	<stdio.h>

char	*ft_strlowcase(char *str);

int	main(int argc, char **argv)
{
	char *ch;

	ch = ft_strlowcase(argv[1]);
	printf("%s\n", ch);

	return (0);
}
