#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("fibonacci de -2 = %d\n", ft_fibonacci(-2));
	printf("fibonacci de 0 = %d\n", ft_fibonacci(0));
	printf("fibonacci de 1 = %d\n", ft_fibonacci(1));
	printf("fibonacci de 3 = %d\n", ft_fibonacci(3));
	printf("fibonacci de 6 = %d\n", ft_fibonacci(6));

	return (0);
}
