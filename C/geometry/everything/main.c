#include "lib.h"

int	main(int argc, char **argv)
{
	int	size;
	int option;
	int	validOption;

	displayMenu();
	printf("Select an option: ");
	if (scanf("%d", &option) == 1)
	{
		if ((validOption = choiceMessage(option)) == -1)
		{
			error("option");
			return (-1);
		}
	}
	else
	{
		error("option");
		return (-1);
	}
	if (argc == 1)
	{
		printf("Introduce a size: ");
		if (scanf("%d", &size) == 1)
		{
			if ((validOption) == -1)
			{
				error("option");
				return (-1);
			}
			else if (size <= 0)
			{
				error("size");
				return (-1);
			}
			choice(validOption, size);
		}
		else
		{
			error("scanf");
			return (-1);
		}
	}
	else
	{
		size = ft_satoi(argv[argc - argc + 1]);
		if (size == -1 || size == 0)
		{
			error("size");
			return (-1);
		}
		printf("The size is %d\n", size);
		choice(validOption, size);
	}
	return (0);
}
