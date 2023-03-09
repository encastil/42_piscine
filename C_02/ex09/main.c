#include	<stdio.h>

char	*ft_strcapitalize(char *str);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *ch;
		ch = ft_strcapitalize(argv[1]);
		printf("%s\n", ch);
	}
	return (0);
}
