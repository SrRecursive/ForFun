#include "lib.h"

int	displayError(char *errorType)
{
	printf("Error %s\n", errorType);
	return (-1);
}

int	tenPow(int n)
{
	int	power;

	power = 1;
	for (int i = 0; i < n; i++)
	{
		power = power * 10;
	}
	return (power);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		str++;
		count++;
	}
	return (count);
}

int	validNumber(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != 0)
	{
		if ((str[pos] < '0' || str[pos] > '9')
			&& (str[0] > '2') && (str[1] > '1') && (str[2] > '4')
			&& (str[3] > '7') && (str[4] > '4') && (str[5] > '8')
			&& (str[6] > '3') && (str[7] > '6') && (str[8] > '4')
			&& (str[9] > '7'))
		{
			return (-1);
		}
		pos++;
	}
	return (0);
}

int	ft_satoi(char *str)
{
	int	pos;
	int	number;
	int	length;
	int	powerto;

	pos = 0;
	number = 0;
	length = ft_strlen(str);
	if (validNumber(str) == 0)
	{
		while (str[pos] != '\0')
		{
			powerto = tenPow(length - pos - 1);
			number = number + (str[pos] - '0') * powerto;
			pos++;
		}
	}
	else
	{
		return (-1);
	}
	return (number);
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