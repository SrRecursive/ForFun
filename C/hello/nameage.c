#define MAX_NAME 30

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	Error(char *typeError)
{
	printf("Error %s\n", typeError);
}

void	hello(char *name, int age)
{
	printf("Hello %s! You are %d years old\n", name, age);
}

char	*giveName()
{
	char	*name;

	name = (char *)malloc(MAX_NAME + 1);
	if (name == NULL)
	{
		Error("malloc");
		return (NULL);
	}
	if (fgets(name, MAX_NAME + 1, stdin) == NULL || name[0] == '\n')
	{
		Error("fgets");
		free(name);
		return (NULL);
	}
	else
	{
		if (name[strlen(name) - 1] == '\n')
		{
            name[strlen(name) - 1] = '\0';
		}
		else
		{
			while (getchar() != '\n');
		}
		return (name);
	}
}

int	giveAge()
{
	int	age;
	
	if(scanf("%d", &age) == 1)
	{
		return (age);
	}
	else
	{
		return (-1);
	}
}

int	main(void)
{
	char	*name;
	int		age;

	printf("What is your name?\n");
	if ((name = giveName()) == NULL)
	{
		Error("name");
		return (-1);
	}
	printf("How old are you?\n");
	if ((age = giveAge()) < 0)
	{
		Error("age");
		free(name);
		return (-1);
	}
	hello(name, age);
	free(name);
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