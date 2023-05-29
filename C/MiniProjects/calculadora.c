#include <stdio.h>
#include <stdlib.h>

// Definir colores
#define CIAN "\033[36m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

// Función mostrar menú
void	mostrar_menu(void)
{
	printf("%s*************************************\n", CIAN);
	printf("*                                   *\n");
	printf("*           %sCalculadora             %s*\n", YELLOW, CIAN);
	printf("*                                   *\n");
	printf("*************************************\n");
	printf("*                                   *\n");
	printf("*   %s1. %sSuma                         %s*\n", MAGENTA, YELLOW, CIAN);
	printf("*   %s2. %sResta                        %s*\n", MAGENTA, YELLOW, CIAN);
	printf("*   %s3. %sMultiplicación               %s*\n", MAGENTA, YELLOW, CIAN);
	printf("*   %s4. %sDivisión                     %s*\n", MAGENTA, YELLOW, CIAN);
	printf("*   %s5. %sSalir                        %s*\n", MAGENTA, YELLOW, CIAN);
	printf("*                                   *\n");
	printf("*************************************%s\n", RESET);
}

// Función suma
int	suma(int n1, int n2)
{
	int	resultado;

	resultado = n1 + n2;
	return (resultado);
}

// Función resta
int	resta(int n1, int n2)
{
	int resultado;

	resultado = n1 - n2;
	return (resultado);
}

// Función multiplicación
int	multiplicacion(int n1, int n2)
{
	int	resultado;

	resultado = n1 * n2;
	return (resultado);
}

// Función división
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

// Función principal
int	main(int argc, char *argv[])
{
	int		opcion, resultado, cantidad, *n;
	char	*endargv;

	opcion = 0;
	cantidad = argc - 1;
	
	// Si introducen 1 argumento muestra un error
	if (argc == 2)
	{
		printf("Uso con parámetros: %s <n1> <n2> ...\n", argv[0]);
		printf("Uso sin parámetros: %s\n", argv[0]);
		return (0);
	}
	else
	{
		// Bucle que se detiene cuando se selecciona la opción de salir
		do
		{
			// Bucle que se detiene cuando escogen una opción válida
			while (opcion < 1 || opcion > 4)
			{
				mostrar_menu();
				printf("Elige una opción: ");
				if (scanf(" %d", &opcion) == 0)
				{
					printf("%sError: %sNo es un número\n", MAGENTA, RESET);
					return (0);
				}
				if (opcion == 5)
				{
					printf("Saliendo del programa...\n");
					return (0);
				}
				else if (opcion < 1 || opcion > 5)
				{
					printf("%sError: %sOpción inválida, inténtelo de nuevo\n", MAGENTA, RESET);
				}
			}

			// Si no hay argumentos
			if (argc == 1)
			{
				printf("¿Cuántos números quieres? ");
				scanf(" %d", &cantidad);
				if (cantidad < 2)
				{
					printf("%sError: %sLa cantidad debe ser al menos 2\n", MAGENTA, RESET);
					return (0);
				}
				
				// Asignación de memoria a n que almacenará los números
				n = (int *) malloc (cantidad * sizeof(int));

				// Comprobación de que se asigna correctamente la memoria
				if (n == NULL)
				{
					printf("%sError: %sLa asignación de memoria ha fallado, saliendo del programa...\n", MAGENTA, RESET);
					return (0);
				}
				printf("Introduce los números: ");
				
				// Bucle para introducir los números
				for (int i = 0; i < cantidad; i++)
				{
					// Si hay un error libera la memoria asignada y sale del programa
					if (scanf(" %d", &n[i]) == 0)
					{
						printf("%sError: %sNo es un número\n", MAGENTA, RESET);
						free(n);
						return (0);
					}
				}
			}
			else
			{
				// Asignación de memoria a n que almacenará los números
				n = (int *) malloc (cantidad * sizeof(int) + 1);
				if (n == NULL)
				{
					printf("%sError: %sLa asignación de memoria ha fallado, saliendo del programa...\n", MAGENTA, RESET);
					return (0);
				}

				// Bucle para introducir los números
				for (int i = 0; i < cantidad; i++)
				{
					n[i] = (int) strtol(argv[i + 1], &endargv, 10);

					// Si hay un error libera la memoria asignada y sale del programa
					if (*endargv != '\0')
					{
						printf("%sError: %sNo es un número\n", MAGENTA, RESET);
						free(n);
						return (0);
					}
				}
			}
			resultado = n[0];

			// Bucle para obtener el resultado
			for (int i = 0; i < cantidad - 1; i++)
			{
				// Switch para utilizar la función correspondiente a la opción
				switch (opcion)
				{
					case 1:
						resultado = suma(resultado, n[i + 1]);
						break;
					case 2:
						resultado = resta(resultado, n[i + 1]);
						break;
					case 3:
						resultado = multiplicacion(resultado, n[i + 1]);
						break;
					case 4:
						resultado = division(resultado, n[i + 1]);
						break;
				}
			}

			// Bucle para mostrar el output: n[0] (operador) n[1] ... = resultado
			for (int i = 0; i < cantidad; i++)
			{
				switch (opcion)
				{
					case 1:
					printf("%d", n[i]);
						break;
					case 2:
					printf("%d", n[i]);
						break;
					case 3:
					printf("%d", n[i]);
						break;
					case 4:
					printf("%d", n[i]);
						break;
				}
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

			// Liberación de memoria porque ya no es necesaria
			free(n);
			printf(" = %d\n", resultado);
			
			// Reinicio de opción porque vuelve al principio
			opcion = 0;
		}while (opcion != 5);
	}
	return (0);
}
