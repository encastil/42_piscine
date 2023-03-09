#include	<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(int argc, char **argv)
{
	int	r;

	r = ft_str_is_lowercase(argv[1]);
	printf("%d\n", r);

	return (0);
}
