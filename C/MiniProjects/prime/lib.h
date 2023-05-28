#ifndef LIB_H
# define LIB_H
# include <stdio.h>
# include <stdlib.h>

int	ft_atoi(const char *n);

int	isprimo(int n)
{
	int	cont = 1, div = 0;
	while (cont <= n)
	{
		if (n % cont == 0)
		{
			div++;
		}
		cont++;
	}
	if (div == 2)
	{
		return (n);
	}
	return (0);
}

void	nprimos0(int num)
{
	int cont = 1, contnprimos = 0;
	while (cont++ < num)
	{
		if (isprimo(cont) != 0)
		{
			contnprimos++;
			printf("Primo #%d: %d\n", contnprimos, isprimo(cont));
		}
		if ((cont - 1) % 2 == 0)
		{
			cont++;
		}
	}
}

void	nprimosx(int num, int nprimos)
{
	int	cont = 1, contnprimos = 0;
	while (cont++ < num && contnprimos < nprimos)
	{
		if (isprimo(cont) != 0)
		{
			contnprimos++;
			printf("Primo #%d: %d\n", contnprimos, isprimo(cont));
		}
		if ((cont - 1) % 2 == 0)
		{
			cont++;
			if (cont == num && contnprimos != nprimos)
			{
				printf("No hay mas primos\n");
			}
		}
	}
}

#endif