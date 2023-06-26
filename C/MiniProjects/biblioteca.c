// Incluir librerías
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Definir tamaños
#define TAM_AUTOR 50
#define TAM_TITULO 100
#define LIMITE_LIBROS 50

// Definir estructuras
typedef struct s_libro
{
    char    autor[TAM_AUTOR];
    char    titulo[TAM_TITULO];
    int     fecha;
    bool    hueco;
    int     indice;
}           t_libro;

typedef struct s_estanteria
{
    t_libro libro[LIMITE_LIBROS];
    int     n_libros;
    int     max_indice;
}           t_estanteria;

// Declarar prototipos de funciones
void    menu(void);
void    anadir_libro(t_libro *libro);
void    mostrar_libro(t_estanteria *estanteria);
void    quitar_libro(t_estanteria *estanteria);

// Función principal
int main(void)
{
    int             opcion;
    t_estanteria    *estanteria;

    estanteria = (t_estanteria *)malloc(sizeof(t_estanteria));
    if (estanteria == NULL)
    {
        printf("Problema asignando memoria");
        return (0);
    }
    estanteria -> n_libros = 0;
    estanteria -> max_indice = 0;
    for (int i = 0; i < LIMITE_LIBROS; i++)
    {
        estanteria -> libro[i].hueco = true;
    }
    do
    {
        opcion = 0;
        menu();
        scanf("%d", &opcion);
        getchar();
        switch (opcion)
        {
            case 1:
                if (estanteria -> n_libros > LIMITE_LIBROS)
                {
                    printf("Estantería llena, no se pueden añadir más libros\n");
                    break;
                }
                estanteria -> n_libros++;
                for (int i = 0; i < estanteria -> n_libros; i++)
                {
                    if (estanteria -> libro[i].hueco == true)
                    {
                        anadir_libro(&estanteria -> libro[i]);
                        estanteria -> libro[i].hueco = false;
                        estanteria -> libro[i].indice = i + 1;
                        if (estanteria -> max_indice < estanteria -> libro[i].indice)
                        {
                            estanteria -> max_indice = estanteria -> libro[i].indice;
                        }
                    }
                }
                break;
            case 2:
                quitar_libro(estanteria);
                break;
            case 3:
                mostrar_libro(estanteria);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion incorrecta\n");
                break;
        }
    }while(opcion != 4);
    free(estanteria);
    return (0);
}

// Inicializar funciones
void    menu(void)
{
    printf("**********************************\n");
    printf("*                                *\n");
    printf("*           Estantería           *\n");
    printf("*                                *\n");
    printf("**********************************\n");
    printf("*                                *\n");
    printf("*   1.- Añadir libro             *\n");
    printf("*   2.- Quitar libro             *\n");
    printf("*   3.- Mostrar libros           *\n");
    printf("*   4.- Salir                    *\n");
    printf("*                                *\n");
    printf("**********************************\n");
    printf("Selecciona una opcion: ");
}

void    anadir_libro(t_libro *libro)
{
    size_t  len_titulo;
    size_t  len_autor;

    printf("Nombre del libro: ");
    fgets(libro -> titulo, TAM_TITULO, stdin);
    len_titulo = strlen(libro -> titulo);
    if (len_titulo > 0 && libro -> titulo[len_titulo - 1] == '\n')
    {
        libro -> titulo[len_titulo - 1] = '\0';
    }
    printf("Nombre del autor: ");
    fgets(libro -> autor, TAM_AUTOR, stdin);
    len_autor = strlen(libro -> autor);
    if (len_titulo > 0 && libro -> autor[len_autor - 1] == '\n')
    {
        libro -> autor[len_autor - 1] = '\0';
    }
    printf("Fecha de publicación: ");
    scanf("%d", &libro -> fecha);
    getchar();
    printf("Libro añadido correctamente\n");
}

void    mostrar_libro(t_estanteria *estanteria)
{
    if (estanteria -> n_libros == 0)
    {
        printf("No hay libros\n");
        return ;
    }
    for (int i = 0; i < estanteria -> max_indice; i++)
    {
        if (estanteria -> libro[i].hueco == false)
        {
        printf("%d.- %s escrito por %s en %d\n", i + 1, estanteria -> libro[i].titulo, estanteria -> libro[i].autor, estanteria -> libro[i].fecha);
        }
    }
}

void    quitar_libro(t_estanteria *estanteria)
{
    int     indice;
    char    verificar;

    printf("Introduce el índice del libro que quieres quitar: ");
    scanf("%d", &indice);
    getchar();
    if (indice > estanteria -> max_indice || indice < 1)
    {
        printf("No hay \n");
        return ;
    }
    if (estanteria -> libro[indice - 1].hueco == false)
    {
        printf("Vas a eliminar el libro %s con indice %d\n", estanteria -> libro[indice - 1].titulo, indice);
        printf("¿Quieres continuar? [s/n]: ");
        scanf("%c", &verificar);
        if (verificar == 's')
        {
            estanteria -> libro[indice - 1].hueco = true;
            estanteria -> n_libros--;
            printf("Libro eliminado correctamente\n");
        }
        else if (verificar == 'n')
        {
            printf("Cancelando...\n");
        }
        else
        {
            printf("Opción incorrecta, cancelando...\n");
        }
    }
}
