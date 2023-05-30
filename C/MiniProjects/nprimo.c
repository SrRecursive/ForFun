#include <stdio.h>
#include <stdlib.h>
#include "colores.h"

int	obtener_divisores(int n);

int	main(int argc, char **argv)
{
	int		cantidad, n, n_aux;
	char	*endargv;

	n_aux = 1;
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
		}
		printf("Introduce la cantidad de primos que quieres (0 si quieres todos): ");
		if (scanf(" %d", &cantidad) == 0)
		{

			printf("%sError: %sNo es un número\n", MAGENTA, RESET);
			return (0);
		}
		if (cantidad < -1)
		{
			printf("%sError: %sNo es una cantidad válida\n", MAGENTA, RESET);
			return (0);
		}
		while (cantidad--)
		{

		}
	}
}

int	obtener_divisores(int n)
{
	int	contador, n_divisores;

	contador = 0;
	n_divisores = 0;
	while ((n / contador) != 0)
	{
		if ((n % contador) == 0)
		{
			n_divisores++;
		}
		contador++;
	}
	return (n_divisores);
}

int	n_primos(int n)
{

}