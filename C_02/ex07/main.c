#include	<stdio.h>

char	*ft_strupcase(char *str);

int	main(int argc, char **argv)
{
	char *ch;

	ch = ft_strupcase(argv[1]);
	printf("%s\n", ch);

	return (0);
}
