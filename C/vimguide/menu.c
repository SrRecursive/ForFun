#include "libvim.h"

void	menu(void)
{
	printf("%s+----------------------------+\n", CIAN);
	printf("|            %sMENU            %s|\n", YELLOW, CIAN);
	printf("+----------------------------+\n");
	printf("| %s1. %sFile                    %s|\n", RED, WHITE, CIAN);
	printf("| %s2. %sMovement                %s|\n", RED, WHITE, CIAN);
	printf("| %s3. %sIdk                     %s|\n", RED, WHITE, CIAN);
	printf("| %s4. %sExit                    %s|\n", RED, WHITE, CIAN);
	printf("+----------------------------+\n");
}

void	optselected(int opt)
{
	switch (opt)
	{
	case 1:
		printf("%sSelected %s1. %sFile\n", WHITE, RED, WHITE);
		break;
	
	default:
		printf("%sInvalid option\n", WHITE);
		system("clear");
		break;
	}
}