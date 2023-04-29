#ifndef LIB_H
# define LIB_H
# include <stdio.h>

void	choice(int validOption, int size);
int		choiceMessage(int option);
int		displayError(char *str);
void	displayMenu(void);
char	fillSymbol(void);
int		ft_satoi(char *str);
void	squareFilled(int base, char fill);
void	squareUnfilled(int base);
void	triangleFilled(int base, char fill);
void	triangleUnfilled(int base);
int		tenPow(int n);
int		validNumber(char *str);

#endif

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