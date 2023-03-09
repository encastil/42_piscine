#include	<stdio.h>

int	ft_str_is_printable(char *str);

int	main(int argc, char **argv)
{
	int	r;

	r = ft_str_is_printable(argv[1]);
	printf("%d\n", r);

	return (0);
}
