#include	<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(int argc, char **argv)
{
	int	r;

	r = ft_str_is_numeric(argv[1]);
	printf("%d\n", r);

	return (0);
}
