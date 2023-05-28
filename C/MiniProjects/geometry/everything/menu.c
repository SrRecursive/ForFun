#include "lib.h"

void	displayMenu(void)
{
	printf("____________________________\n");
	printf("|                          |\n");
	printf("|         GEOMETRY         |\n");
	printf("|__________________________|\n");
	printf("|                          |\n");
	printf("| 1. Filled square         |\n");
	printf("| 2. Unfilled square       |\n");
	printf("| 3. Filled triangle       |\n");
	printf("| 4. Unfilled triangle     |\n");
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