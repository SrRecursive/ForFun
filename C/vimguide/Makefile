NAME = programa

FILES = main.c

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)

exe:
	./$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: exe clean fclean re
.SILENT:

#     RRRRR                                                                                                       
#   RRR   RRR                                                                                                     
#  RRR     RRR                                                                                                    
#  RR      RRRRRRRRRRRRRRRR                                                                                       
#  RRR     RRRR          RRRRRR                                                hh                                 
#   RRR    RRR               RRR                                               hh                                 
#     RRRRRRRR               RRRR                                              hh                                 
#          RRR            RRRRR                                                hh                                 
#          RRR            RRR                                                  hh                                 
#          RRR          RRRR                                                   hh               nn                
#         RRR       RRRRR                    ooooooo      jj      ooooooo      hh hhhhhhh       nn nnnnnn         
#         RRRRRRRRRRRRRR                   ooo     ooo    jj    ooo     ooo    hhhh     hhh     nnnn    nnn       
#       RRRR          RRRR               ooo        ooo   jj  ooo        ooo   hh        hh     nn       nn       
#      RRRR             RRR              oo          oo   jj  oo          oo   hh        hh     nn       nn       
#     RRRR               RRR             ooo        ooo   jj  ooo        ooo   hh        hh     nn       nn       
#    RRR                  RRR     RRRRR    ooo     ooo    jj    ooo     ooo    hh        hh     nn       nn   nn  
#  RRRR                    RRRRRRRR          ooooooo      jj      ooooooo      hh         hhhh  nn        nnnn    
#                                                    jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj
#                                                   jj    jj                                                      
#                                                   jj    jj                                                      
#                                                    jjjjjjj                                                      