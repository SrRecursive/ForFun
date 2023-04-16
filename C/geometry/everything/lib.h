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
