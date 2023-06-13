#include <stdio.h>
#include <stdlib.h>
#include "colores.h"
#define SUMA 1
#define RESTA 2
#define MULTIPLICACION 3
#define DIVISION 4

// Declarar prototipos de funciones
void	mostrar_menu(void);
int		suma(int n1, int n2);
int		resta(int n1, int n2);
int		multiplicacion(int n1, int n2);
int		division(int n1, int n2);
int		 opcion_valida(int opcion);
int		*obtener_numeros(int *n, int cantidad, int argc, char **argv);
void 	mostrar_operaciones(int *n, int cantidad, int opcion);

// Función principal
int	main(int argc, char **argv)
{
	int	opcion, resultado, cantidad, flag, *n;

	opcion = 0;
	cantidad = argc - 1;

	// Si introducen 1 argumento muestra un error
	if (argc == 2)
	{
		printf("%sError: %sLa cantidad debe ser al menos 2\n", T_MAGENTA, RESET);
		printf("%sUso con parámetros: %s <n1> <n2> ...\n%s", T_YELLOW, argv[0], RESET);
		printf("%sUso sin parámetros: %s\n%s", T_YELLOW, argv[0], RESET);
		return (0);
	}
	else
	{
		// Bucle que se detiene cuando se selecciona la opción de salir
		while (opcion != 5)
		{
			flag = 0;
			opcion = opcion_valida(opcion);
			if (opcion == 5)
			{
				return (0);
			}
			// Si no hay argumentos
			if (argc == 1)
			{
				printf("¿Cuántos números quieres? ");
				scanf(" %d", &cantidad);
				if (cantidad < 2)
				{
					printf("%sError: %sLa cantidad debe ser al menos 2\n", T_MAGENTA, RESET);
					return (0);
				}
				
				// Asignación de memoria a n que almacenará los números
				n = (int *) malloc (cantidad * sizeof(int));

				// Comprobación de que se asigna correctamente la memoria
				if (n == NULL)
				{
					printf("%sError: %sLa asignación de memoria ha fallado, saliendo del programa...\n", T_MAGENTA, RESET);
					return (0);
				}
				printf("Introduce los números: ");
				n = obtener_numeros(n, cantidad, argc, argv);
			}
			else
			{
				// Asignación de memoria a n que almacenará los números
				n = (int *) malloc (cantidad * sizeof(int) + 1);

				// Comprobación de que se asigna correctamente la memoria
				if (n == NULL)
				{
					printf("%sError: %sLa asignación de memoria ha fallado, saliendo del programa...\n", T_MAGENTA, RESET);
					return (0);
				}
				n = obtener_numeros(n, cantidad, argc, argv);
			}
			resultado = n[0];

			// Bucle para obtener el resultado
			for (int i = 0; i < cantidad - 1; i++)
			{
				if (opcion == 4 && n[i + 1] == 0)
				{
					printf("%sError: No puedo dividir entre 0\n%s", T_MAGENTA, RESET);
					flag = 1;
					break;
				}
				// Switch para utilizar la función correspondiente a la opción
				switch (opcion)
				{
					case SUMA:
						resultado = suma(resultado, n[i + 1]);
						break;
					case RESTA:
						resultado = resta(resultado, n[i + 1]);
						break;
					case MULTIPLICACION:
						resultado = multiplicacion(resultado, n[i + 1]);
						break;
					case DIVISION:
						resultado = division(resultado, n[i + 1]);
						break;
				}
			}
			if (flag != 1)
			{
				mostrar_operaciones(n, cantidad, opcion);
				printf(" = %d\n", resultado);
			}

			// Liberación de memoria porque ya no es necesaria
			free(n);

			// Reinicio la opción para que vuelva a mostrar el menú
			opcion = 0;
		}
	}
	return (0);
}

// Inicializar funciones
void	mostrar_menu(void)
{
	printf("%s*************************************\n", T_CYAN);
	printf("*                                   *\n");
	printf("*           %sCalculadora             %s*\n", T_YELLOW, T_CYAN);
	printf("*                                   *\n");
	printf("*************************************\n");
	printf("*                                   *\n");
	printf("*   %s1. %sSuma                         %s*\n", T_MAGENTA, T_YELLOW, T_CYAN);
	printf("*   %s2. %sResta                        %s*\n", T_MAGENTA, T_YELLOW, T_CYAN);
	printf("*   %s3. %sMultiplicación               %s*\n", T_MAGENTA, T_YELLOW, T_CYAN);
	printf("*   %s4. %sDivisión                     %s*\n", T_MAGENTA, T_YELLOW, T_CYAN);
	printf("*   %s5. %sSalir                        %s*\n", T_MAGENTA, T_YELLOW, T_CYAN);
	printf("*                                   *\n");
	printf("*************************************%s\n", RESET);
}

int	suma(int n1, int n2)
{
	int	resultado;

	resultado = n1 + n2;
	return (resultado);
}

int	resta(int n1, int n2)
{
	int resultado;

	resultado = n1 - n2;
	return (resultado);
}

int	multiplicacion(int n1, int n2)
{
	int	resultado;

	resultado = n1 * n2;
	return (resultado);
}

int	division(int n1, int n2)
{
	int	resultado;

	if (n2 != 0)
	{
		resultado = n1 / n2;
	}
	else
	{
		printf("¡No puedo dividir entre 0!\n");
	}
	return (resultado);
}

int opcion_valida(int opcion)
{
	// Bucle que se detiene cuando escogen una opción válida
	while (opcion < 1 || opcion > 4)
	{
		mostrar_menu();
		printf("Elige una opción: ");
		if (scanf(" %d", &opcion) == 0)
		{
			printf("%sError: %sNo es un número\n", T_MAGENTA, RESET);
			return (0);
		}
		if (opcion == 5)
		{
			printf("Saliendo del programa...\n");
			break;
		}
		else if (opcion < 1 || opcion > 5)
		{
			printf("%sError: %sOpción inválida, inténtelo de nuevo\n", T_MAGENTA, RESET);
		}
	}
	return (opcion);
}

int	*obtener_numeros(int *n, int cantidad, int argc, char **argv)
{
	char	*endargv;
	for (int i = 0; i < cantidad; i++)
	{
		if (argc == 1)
		{
			if (scanf(" %d", &n[i]) == 0)
			{
				printf("%sError: %sNo es un número\n", T_MAGENTA, RESET);
				free(n);
				return (0);
			}
		}
		else
		{
			// Convierte el string en int
			n[i] = (int)strtol(argv[i + 1], &endargv, 10);

			// Si hay un error libera la memoria asignada y sale del programa
			if (*endargv != '\0')
			{
				printf("%sError: %sNo es un número\n", T_MAGENTA, RESET);
				free(n);
				return (0);
			}
		}
	}
	return (n);
}

void mostrar_operaciones(int *n, int cantidad, int opcion)
{
	for (int i = 0; i < cantidad; i++)
	{
		printf("%d", n[i]);
		if (i != cantidad - 1)
		{
			switch (opcion)
			{
				case 1:
					printf(" + ");
					break;
				case 2:
					printf(" - ");
					break;
				case 3:
					printf(" * ");
					break;
				case 4:
					printf(" / ");
					break;
			}
		}
	}
}
