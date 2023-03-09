#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("Raiz Cuadrada de -2 = %d\n", ft_sqrt(-2));
	printf("Raiz Cuadrada de 9 = %d\n", ft_sqrt(9));
	printf("Raiz Cuadrada de 15 = %d\n", ft_sqrt(15));
	printf("Raiz Cuadrada de 144 = %d\n", ft_sqrt(144));
	printf("Raiz Cuadrada de 1245 = %d\n", ft_sqrt(1245));


	return (0);
}
