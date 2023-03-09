#include	<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(int argc, char **argv)
{
	unsigned int	out;
	unsigned int	ui;

	ui = *argv[3] - 48;
	out = ft_strlcpy(argv[1], argv[2], ui);
	printf("%d\n", out);

	return (0);
}
