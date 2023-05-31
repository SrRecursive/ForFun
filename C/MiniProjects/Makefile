all:
	@echo "\033[1;32mComandos disponibles: \
	\033[0;33m\
	holamundo, \
	calculadora, \
	esprimo, \
	nprimo, \
	clean, \
	fclean \
	\033[0m"

holamundo:
	@gcc -Wall -Wextra -Werror holamundo.c -o holamundo
	@echo "Para utilizar el programa: \033[1;33m./holamundo\033[0m"

calculadora:
	@gcc -Wall -Wextra -Werror calculadora.c -o calculadora
	@echo "Para utilizar el programa: \033[1;33m./calculadora\033[0m"

esprimo:
	@gcc -Wall -Wextra -Werror esprimo.c -o esprimo
	@echo "Para utilizar el programa: \033[1;33m./esprimo\033[0m"

nprimo:
	@gcc -Wall -Wextra -Werror nprimo.c -o nprimo
	@echo "Para utilizar el programa: \033[1;33m./nprimo\033[0m"

clean:
	@rm -f holamundo calculadora esprimo nprimo

fclean: clean
	@clear

re: clean all

.PHONY: holamundo calculadora esprimo nprimo clean fclean re