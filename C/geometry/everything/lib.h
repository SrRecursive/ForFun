#ifndef LIB_H
# define LIB_H
# include <stdio.h>

void	choice(int validOption, int size);
int		choiceMessage(int option);
int		displayError(char *str);
void	displayMenu(void);
int		ft_satoi(char *str);
void	squareAsterisk(int base);
void	squareVoid(int base);
void	triangleAsterisk(int base);
void	triangleVoid(int base);
int		tenPow(int n);
int		validNumber(char *str);

#endif
