#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("Potencia de 0, 0 = %d\n", ft_recursive_power(0, 0));
	printf("Potencia de 8, 0 = %d\n", ft_recursive_power(8, 0));
	printf("Potencia de 2, -3 = %d\n", ft_recursive_power(2, -3));
	printf("Potencia de 3, 4 = %d\n", ft_recursive_power(3, 4));
	printf("Potencia de 5, 7 = %d\n", ft_recursive_power(5, 7));

	return (0);
}
