#ifndef LIB_H
# define LIB_H
# include <stdio.h>

int		aNumber(char *str);
void	choice(int	validOption, int size);
int		choiceMessage(int option);
void	error(char *str);
int		ft_satoi(char *str);
void	displayMenu();
void	squareAsterisk(int base);
void	squareVoid(int base);
void	triangleAsterisk(int base);
void	triangleVoid(int base);
int		tenpow_to(int n);

#endif
