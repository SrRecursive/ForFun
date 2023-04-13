#include "lib.h"

int tenpow_to(int n)
{
    int power;
    
    power = 1;
    for (int i = 0; i < n; i++)
        power = power *10;
    return(power);
}

void    triangle(int base)
{
    for (int i = 0; i < base; i++)
    {
        for (int k = base; k > i; k--)
            printf(" ");
        printf("/");
        if (i == base - 1)
        {
            for (int j = base - i; j < base; j++)
                printf("__");
        }
        else
        {
            for (int j = base - i; j < base; j++)
                printf("  ");
        }
        if (i == base - 1)
            printf("\\");
        else
            printf("\\");
        printf("\n");
    }
}

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (*str != 0)
    {
        str++;
        count++;
    }
    return (count);
}

int anumber(char *str)
{
    int pos;

    pos = 0;
    while (str[pos] != 0)
    {
        if (str[pos] < '0' || str[pos] > '9')
        {
            return(-1);
        }
        pos++;
    }
    return (0);
}

int ft_satoi(char *str)
{
    int pos;
    int number;
    int length;
    int flag;

    pos = 0;
    number = 0;
    length = ft_strlen(str);
    flag = anumber(str);
    if (flag == 0)
    {
        while (str[pos] != 0)
        {
            if (str[pos] >= '0' && str[pos] <= '9')
                number = number + (str[pos] - '0') * tenpow_to(length - pos - 1);
            pos++;
        }
    }
    return (number);
}