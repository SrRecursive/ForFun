#include "lib.h"

int	tenpow_to(int n)
{
	int	power;

	power = 1;
	for (int i = 0; i < n; i++)
	{
		power = power * 10;
	}
	return (power);
}

void	triangle(int base)
{
	for (int i = 0; i < base; i++)
	{
		for (int k = base; k > i; k--)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
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

int	anumber(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != 0)
	{
		if (str[pos] < '0' || str[pos] > '9')
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
	int	flag;

	pos = 0;
	number = 0;
	length = ft_strlen(str);
	flag = anumber(str);
	if (flag == 0)
	{
		while (str[pos] != 0)
		{
			if (str[pos] >= '0' && str[pos] <= '9')
			{
				number = number + (str[pos] - '0') * tenpow_to(length - pos - 1);
			}
			pos++;
		}
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