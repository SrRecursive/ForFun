#include <stdio.h>
#include <stdlib.h>
#include "colores.h"

int	obtener_divisores(int n);
int	esprimo(int n);

int	main(int argc, char **argv)
{
	int		cantidad, n, n_aux, contador;
	char	*endargv;

	n_aux = 1;
	contador = 1;
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
		if (n < 2)
		{
			printf("El número %d no es primo\n", n);
			return (0);
		}
		printf("Introduce la cantidad de primos que quieres (0 si quieres todos): ");
		if (scanf(" %d", &cantidad) == 0)
		{

			printf("%sError: %sNo es un número\n", MAGENTA, RESET);
			return (0);
		}
		if (cantidad < 0)
		{
			printf("%sError: %sNo es una cantidad válida\n", MAGENTA, RESET);
			return (0);
		}
		while ((n_aux <= n))
		{
			if (contador == cantidad + 1 && cantidad != 0)
			{
				break;
			}
			if (esprimo(n_aux) == 1)
			{
				printf("Primo número %d: %d\n", contador, n_aux);
				contador++;
			}
			if (n )
			n_aux++;
		}
		if (cantidad != 0 && contador <= cantidad)
		{
			printf("%sError: %sQuerías %d primos, pero el número %d solo tiene %d primos\n",
					MAGENTA, RESET, cantidad, n, contador - 1);
		}
	}
	return (0);
}

int	obtener_divisores(int n)
{
	int	divisor, n_divisores;

	divisor = 1;
	n_divisores = 0;
	while ((n / divisor) > 0)
	{
		if ((n % divisor) == 0)
		{
			n_divisores++;
		}
		divisor++;
	}
	return (n_divisores);
}

int	esprimo(int n)
{
	int	n_divisores;

	n_divisores = obtener_divisores(n);
	if (n_divisores == 2)
	{
		return (1);
	}
	return (0);
}