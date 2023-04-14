#include "lib.h"

int	main(int argc, char **argv)
{
	int	size;

	if (argc == 1)
	{
		printf("Introduce la base: ");
		if (scanf("%d", &size) == 1)
		{
			printf("Este programa te hace un triangulo de base %d\n", size);
			triangle(size);
		}
		else
		{
			printf("Base invalida");
		}
	}
	else
	{
		size = ft_satoi(argv[argc - argc + 1]);
		if (size == -1)
		{
			printf("Base invalida");
			return (0);
		}
		printf("Este programa te hace un triangulo de altura %d\n", size);
		triangle(size);
	}
	return (0);
}
