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
	int	powerto;

	pos = 0;
	number = 0;
	length = ft_strlen(str);
	flag = aNumber(str);
	if (flag == 0)
	{
		while (str[pos] != 0)
		{
			powerto = tenpow_to(length - pos - 1);
			if ((str[pos] >= '0') && (str[pos] <= '9')
				&& (str[0] <= '2') && (str[1] <= '1') && (str[2] <= '4')
				&& (str[3] <= '7') && (str[4] <= '4') && (str[5] <= '8')
				&& (str[6] <= '3') && (str[7] <= '6') && (str[8] <= '4')
				&& (str[9] <= '7'))
			{
				number = number + (str[pos] - '0') * powerto;
			}
			else
			{
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
