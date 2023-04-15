#include "lib.h"

void	error(char *errorType)
{
	printf("Error %s\n", errorType);
}

int	tenpow_to(int n)
{
	int	power;

	power = 1;
	for (int i = 0; i < n; i++)
	{
		power = power * 10;
	}
	return (power);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		str++;
		count++;
	}
	return (count);
}

int	aNumber(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != 0)
	{
		if (str[pos] < '0' || str[pos] > '9')
		{
			return (-1);
		}
		pos++;
	}
	return (0);
}

int	ft_satoi(char *str)
{
	int	pos;
	int	number;
	int	length;
	int	flag;
	int powerto;

	pos = 0;
	number = 0;
	length = ft_strlen(str);
	flag = aNumber(str);
	if (flag == 0)
	{
		while (str[pos] != 0)
		{
			powerto = tenpow_to(length - pos - 1);
			if (str[pos] >= '0' && str[pos] <= '9' && number <= 2147483647)
			{
				number = number + (str[pos] - '0') * powerto;
			}
			else
			{
				error("size");
				return (-1);
			}
			pos++;
		}
	}
	else
	{
		return (-1);
	}
	return (number);
}

void	displayMenu(void)
{
    printf("____________________________\n");
    printf("|                          |\n");
    printf("|         GEOMETRY         |\n");
    printf("|__________________________|\n");
    printf("|                          |\n");
    printf("| 1. asterisks square      |\n");
    printf("| 2. void square           |\n");
    printf("| 3. asterisks triangle    |\n");
    printf("| 4. void triangle         |\n");
    printf("| 5. Leave the program     |\n");
	printf("|__________________________|\n");
}

int	choiceMessage(int option)
{
	switch (option)
	{
	case 1:
		printf("You selected option 1. asterisk square\n");
		break;
	case 2:
		printf("You selected option 2. void square\n");
		break;
	case 3:
		printf("You selected option 3. asterisk triangle\n");
		break;
	case 4:
		printf("You selected option 4. void triangle\n");
		break;
	case 5:
		printf("You selected option 5. Leave the program\n");
		printf("Leaving the program...");
		break;
	default:
		error("option");
		return(-1);
		break;
	}
	return (option);
}

void	choice(int	validOption, int size)
{
	switch (validOption)
	{
	case 1:
		squareAsterisk(size);
		break;
	case 2:
		squareVoid(size);
		break;
	case 3:
		triangleAsterisk(size);
		break;
	case 4:
		triangleVoid(size);
		break;
	default:
		break;
	}
}
