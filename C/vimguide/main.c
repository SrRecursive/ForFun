#include "libvim.h"

int	main(void)
{
	int	opt;
	
	while (opt != 4)
	{
		system("clear");
		menu();
		printf("%sSelect an option:%s ", WHITE, MAGENTA);
		scanf("%d", &opt);
		optselected(opt);
	}
}
