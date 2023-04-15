#define MAX_NAME 30

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	Error(char *typeError)
{
	printf("Error %s\n", typeError);
}

void	hello(char *name, int age)
{
	printf("¡Hola %s! Tienes %d años\n", name, age);
}

char	*giveName()
{
	char	*name;

	name = (char *)malloc(MAX_NAME + 1);
	if (name == NULL)
	{
		Error("malloc");
		return (NULL);
	}
	if (fgets(name, MAX_NAME + 1, stdin) == NULL || name[0] == '\n')
	{
		Error("fgets");
		free(name);
		return (NULL);
	}
	else
	{
		if (name[strlen(name) - 1] == '\n')
		{
            name[strlen(name) - 1] = '\0';
		}
		else
		{
			while (getchar() != '\n');
		}
		return (name);
	}
}

int	giveAge()
{
	int	age;
	
	if(scanf("%d", &age) == 1)
	{
		return (age);
	}
	else
	{
		return (-1);
	}
}

int	main(void)
{
	char	*name;
	int		age;

	printf("¿Cómo te llamas?\n");
	if ((name = giveName()) == NULL)
	{
		Error("name");
		return (-1);
	}
	printf("¿Cuántos años tienes?\n");
	if ((age = giveAge()) < 0)
	{
		Error("age");
		free(name);
		return (-1);
	}
	hello(name, age);
	free(name);
}
