#include "lib.h"

int	main(int argc, char **argv)
{
	unsigned int	num = 0, nprimos = 0;
	if (argc == 1)
	{
		printf("Introduce un numero: ");
		scanf("%d", &num);
		printf("Cuantos primos de %d quieres? (Introduce 0 si quieres todos) ", num);
		scanf("%d", &nprimos);
	}
	else if (argc == 2)
	{
		num = atoi(argv[1]);
	}
	else if (argc == 3)
	{
		num = atoi(argv[1]);
		nprimos = atoi(argv[2]);
	}
	else
	{
		printf("Te has pasado con los argumentos!\n");
		return (0);
	}
	if (nprimos == 0)
	{
		nprimos0(num);
	}
	else
	{
		nprimosx(num, nprimos);
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