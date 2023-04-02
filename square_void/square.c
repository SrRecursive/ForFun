#include "lib.h"

int main(int argc, char **argv)
{
    int size;

    if (argc == 1)
    {
        printf("Introduce la base: ");
        scanf("%d", &size);
        printf("Este programa te hace un cuadrado de base %d\n", size);
        square(size);
    }
    else
    {
        size = ft_satoi(argv[argc-argc+1]);
        if (size == -1)
        {
            printf("Base invalida");
            return (0);
        }
        printf("Este programa te hace un cuadrado de base %d\n", size);
        square(size);
    }
    return (0);
}

