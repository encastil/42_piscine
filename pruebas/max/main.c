#include <stdio.h>
#include <unistd.h>

int	max(int *tab, unsigned int len);

int	main(void)
{
	int	*nbr;

	*nbr = 1423;

	printf("%d\n", max(nbr, 4));

	return (0);
}
