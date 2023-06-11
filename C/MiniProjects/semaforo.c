#include <unistd.h>
#include <stdio.h>
#include "colores.h"

// Crear un enum Semaforo que contenga los estados del semáforo
typedef enum
{
	ROJO,
	VERDE,
	AMARILLO
}	Semaforo;

// Crear la estructura s_semaforo que será denominada t_semaforo
typedef struct s_semaforo
{
	Semaforo color;
	int		flag;
}		t_semaforo;

// Declarar funciones
void	estado_semaforo(Semaforo *color, int *flag);

int	main(void)
{
	t_semaforo	o_semaforo[2];
	int			cont;

	o_semaforo[0].color = VERDE;
	o_semaforo[1].color = ROJO;	
	cont = 30;
	while (cont--)
	{
		write(1, "semáforo 1: ", 12);
		estado_semaforo(&o_semaforo[0].color, &o_semaforo[0].flag);
		write(1, "semáforo 2: ", 12);
		estado_semaforo(&o_semaforo[1].color, &o_semaforo[1].flag);
		if (o_semaforo[0].color == AMARILLO)
		{
			usleep(1500000);
		}
		else
		{
			usleep(1000000);
		}
	}
}

// Inicializar funciones
void estado_semaforo(Semaforo *color, int *flag)
{
	switch (*color)
	{
	case ROJO:
		printf("🔴");
		printf("%s rojo%s\n", T_RED, RESET);
		*color = AMARILLO;
		*flag = 0;
		break;
	case AMARILLO:
		printf("🟡");
		printf("%s amarillo%s\n", T_YELLOW, RESET);
		if (*flag == 0)
		{
			*color = VERDE;
		}
		else if (*flag == 1)
		{
			*color = ROJO;
		}
		break;
	case VERDE:
		printf("🟢");
		printf("%s verde%s\n", T_GREEN, RESET);
		*color = AMARILLO;
		*flag = 1;
		break;
	}
}
