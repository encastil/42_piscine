#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("Es Primo -2 = %d\n", ft_is_prime(-2));
	printf("Es Primo 3 = %d\n", ft_is_prime(3));
	printf("Es Primo 10 = %d\n", ft_is_prime(10));
	printf("Es Primo 8 = %d\n", ft_is_prime(8));
	printf("Es Primo 13 = %d\n", ft_is_prime(13));

	return (0);
}
