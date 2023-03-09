#include	<stdio.h>

void	ft_putchar(char c);
char	*ft_alpha_mirror(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *ch;
		ch = ft_alpha_mirror(argv[1]);
		printf("%s\n", ch);
	}
	ft_putchar('\n');
	return (0);
}
