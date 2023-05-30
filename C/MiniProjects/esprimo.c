#include <stdio.h>
#include <stdlib.h>
#include "colores.h"

int	obtener_divisores(int n);

int	main(int argc, char **argv)
{
	int		n, n_divisores;
	char	*endargv;

	if (argc > 2)
	{
		printf("%sUso con parámetros: %s <n>\n%s", YELLOW, argv[0], RESET);
		printf("%sUso sin parámetros: %s\n%s", YELLOW, argv[0], RESET);
	}
	else
	{
		if (argc == 1)
		{
			printf("Introduce el número: ");
			if (scanf(" %d", &n) == 0)
			{
				printf("%sError: %sNo es un número\n", MAGENTA, RESET);
				return (0);
			}
		}
		else
		{
			n = (int) strtol(argv[1], &endargv, 10);

			if (*endargv != '\0')
			{
				printf("%sError: %sNo es un número\n", MAGENTA, RESET);
				return (0);
			}
		}
		n_divisores = obtener_divisores(n);
		if (n_divisores == 2)
		{
			printf("El número %d es primo\n", n);
		}
		else
		{
			printf("El número %d no es primo\n", n);
		}
	}
	return (0);
}

int	obtener_divisores(int n)
{
	int	divisor, n_divisores;

	divisor = 1;
	n_divisores = 0;
	while ((n / divisor) != 0)
	{
		if ((n % divisor) == 0)
		{
			n_divisores++;
		}
		divisor++;
	}
	return (n_divisores);
}
