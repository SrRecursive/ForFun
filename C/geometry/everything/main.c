#include "lib.h"

int	main(int argc, char **argv)
{
	int	size;
	int	option;
	int	validOption;
	int flag;

	if (argc == 2)
	{
		flag = validNumber(argv[argc - argc + 1]);
		if (flag == -1 || flag == 0)
		{
			return (displayError("size"));
		}
	}
	displayMenu();
	printf("Select an option: ");
	if (scanf("%d", &option) == 1)
	{
		validOption = choiceMessage(option);
		if (validOption == -1)
		{
			return (displayError("option"));
		}
	}
	else
	{
		return (displayError("scanf"));
	}
	if (argc == 1)
	{
		printf("Introduce a size: ");
		if (scanf("%d", &size) == 1)
		{
			if ((validOption) == -1)
			{
				return (displayError("option"));
			}
			else if (size <= 0)
			{
				return (displayError("size"));
			}
			choice(validOption, size);
		}
		else
		{
			return (displayError("scanf"));
		}
	}
	else
	{
		size = ft_satoi(argv[argc - argc + 1]);
		printf("The size is %d\n", size);
		choice(validOption, size);
	}
	return (0);
}

/*
     RRRRR                                                                                                       
   RRR   RRR                                                                                                     
  RRR     RRR                                                                                                    
  RR      RRRRRRRRRRRRRRRR                                                                                       
  RRR     RRRR          RRRRRR                                                hh                                 
   RRR    RRR               RRR                                               hh                                 
     RRRRRRRR               RRRR                                              hh                                 
          RRR            RRRRR                                                hh                                 
          RRR            RRR                                                  hh                                 
          RRR          RRRR                                                   hh               nn                
         RRR       RRRRR                    ooooooo      jj      ooooooo      hh hhhhhhh       nn nnnnnn         
         RRRRRRRRRRRRRR                   ooo     ooo    jj    ooo     ooo    hhhh     hhh     nnnn    nnn       
       RRRR          RRRR               ooo        ooo   jj  ooo        ooo   hh        hh     nn       nn       
      RRRR             RRR              oo          oo   jj  oo          oo   hh        hh     nn       nn       
     RRRR               RRR             ooo        ooo   jj  ooo        ooo   hh        hh     nn       nn       
    RRR                  RRR     RRRRR    ooo     ooo    jj    ooo     ooo    hh        hh     nn       nn   nn  
  RRRR                    RRRRRRRR          ooooooo      jj      ooooooo      hh         hhhh  nn        nnnn    
                                                    jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj
                                                   jj    jj                                                      
                                                   jj    jj                                                      
                                                    jjjjjjj                                                      
*/