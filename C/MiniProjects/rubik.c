#include <stdio.h>
#include <stdlib.h>
#include "colores.h"

#define DOWN 0
#define UP 1
#define FRONT 2
#define BACK 3
#define LEFT 4
#define RIGHT 5

char    **f_cara(void)
{
    char    **cara;
    static char    rellenar = '1';

    cara = (char **)malloc(sizeof(char *) * 4);
    for (int i = 0; i < 3; i++)
    {
        cara[i] = (char *)malloc(sizeof(char) * 4);
        for (int j = 0; j < 3; j++)
        {
            cara[i][j] = rellenar;
            if (j == 3)
            {
                cara[i][j] = '\0';
            }
        }
        if (i == 3)
        {
            cara[i] = '\0';
        }
    }
    rellenar++;
    return (cara);
}

void    cubo(char ***cara)
{
    char    letra[6] = "DUBFLR";

    for (int i = 0; i < 6; i++)
    {
        printf("%s%c\n", RESET, letra[i]);
        switch (i)
        {
            case DOWN:
                printf("%s", T_RED);
                break;
            case UP:
                printf("%s", T_MAGENTA);
                break;
            case FRONT:
                printf("%s", T_BLUE);
                break;
            case BACK:
                printf("%s", T_GREEN);
                break;
            case LEFT:
                printf("%s", T_YELLOW);
                break;
            case RIGHT:
                printf("%s", T_WHITE);
                break;
        }
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%c", cara[i][j][k]);
                if (k == 2)
                {
                    printf("\n");
                }
            }
        }
    }
}

void    permutar_h_izq(char ***cubo, int fila)
{
    char    ***temp;

    temp = cubo;

    for (int i = FRONT; i < RIGHT; i++)
    {
        printf("%s%s**%d**\n%s", BOLD, T_YELLOW, i, RESET);
        if (i == RIGHT)
        {
            cubo[FRONT][fila] = temp[RIGHT][fila];
        }
        else
        {
            cubo[i + 1][fila] = cubo[i][fila];
        }
    }
}

int main(void)
{
    char    **cara[6];
    
    // Notación: B F U D L R
    cara[DOWN] = f_cara();
    cara[UP] = f_cara();
    cara[FRONT] = f_cara();
    cara[BACK] = f_cara();
    cara[LEFT] = f_cara();
    cara[RIGHT] = f_cara();

    cubo(cara);
    permutar_h_izq(cara, 1);
    cubo(cara);
}
