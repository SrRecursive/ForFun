#ifndef LIBVIM_H

# define LIBVIM_H

// Define colors
# define BLACK "\033[030m"
# define RED "\033[031m"
# define GREEN "\033[032m"
# define YELLOW "\033[033m"
# define BLUE "\033[034m"
# define MAGENTA "\033[035m"
# define CIAN "\033[036m"
# define WHITE "\033[037m"

//Include libraries
# include <stdio.h>
# include <stdlib.h>

void	menu(void);
void	optselected(int opt);

#endif
