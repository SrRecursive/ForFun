#include "lib.h"

char	fillSymbol(void)
{
	char symbol;
	
	printf("Introduce a symbol: ");
	scanf(" %c", &symbol);
	return (symbol);
}
void	squareFilled(int base, char fill)
{
	for (int i = 0; i < base; i++)
	{
		if (i > 0 && i < base - 1)
		{
			for (int k = 0; k < base; k++)
			{
				printf("%c ", fill);
			}
		}
		else
		{
			for (int j = 0; j < base; j++)
			{
				printf("%c ", fill);
			}
		}
		printf("\n");
	}
}

void	squareUnfilled(int base)
{
	for (int i = 0; i <= base; i++)
	{
		if (i > 0 && i < base)
		{
			printf("|");
			for (int k = 0; k < 2 * base - 1; k++)
			{
				printf(" ");
			}
			printf("|");
		}
		else if (i == base)
		{
			printf("|");
			for (int k = 0; k < base - 1; k++)
			{
				printf("_ ");
			}
			printf("_|");
		}
		else
		{
			for (int j = 0; j < base; j++)
			{
				printf(" _");
			}
		}
		printf("\n");
	}
}

void	triangleFilled(int base, char fill)
{
	for (int i = 0; i < base; i++)
	{
		for (int k = base; k > i; k--)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf(" %c", fill);
		}
		printf("\n");
	}
}

void	triangleUnfilled(int base)
{
	for (int i = 0; i < base; i++)
	{
		for (int k = base; k > i; k--)
		{
			printf(" ");
		}
		printf("/");
		if (i == base - 1)
		{
			for (int j = base - i; j < base; j++)
			{
				printf("__");
			}
		}
		else
		{
			for (int j = base - i; j < base; j++)
			{
				printf("  ");
			}
		}
		if (i == base - 1)
		{
			printf("\\");
		}
		else
		{
			printf("\\");
		}
		printf("\n");
	}
}
