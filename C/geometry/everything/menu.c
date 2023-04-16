#include "lib.h"

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
		case 5 :
			printf("You selected option 5. Leave the program\n");
			printf("Leaving the program...\n");
		break;
		default:
			return (-1);
		break;
	}
	return (option);
}

void	choice(int validOption, int size)
{
	switch (validOption)
	{
		case 1:
			squareFilled(size, fillSymbol());
		break;
		case 2:
			squareUnfilled(size);
		break;
		case 3:
			triangleFilled(size, fillSymbol());
		break;
		case 4:
			triangleUnfilled(size);
		break;
		default:
		break;
	}
}
