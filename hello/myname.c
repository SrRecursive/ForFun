#include <stdio.h>
#include <stdlib.h>

void	helloworld(void)
{
	printf("Hello World!\n");
}

char	*strname(void)
{
	char	*name;

	name = (char *)malloc(7);
	name[0] = 'R';
	name[1] = 'o';
	name[2] = 'j';
	name[3] = 'o';
	name[4] = 'h';
	name[5] = 'n';
	name[6] = '\0';
	return (name);
}

int	intage(void)
{
	int	age;

	age = 19;
	return (age);
}

int	main(void)
{
	char	*name;
	int		age;

	name = strname();
	age = intage();
	helloworld();
	printf("My name is %s and I'm %d years old!\n", name, age);
	free(name);
	printf("Welcome to my profile!\n");
}
