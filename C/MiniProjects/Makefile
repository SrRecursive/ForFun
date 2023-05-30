all: holamundo calculadora

holamundo:
	@gcc -Wall -Wextra -Werror holamundo.c -o holamundo
	@echo "Para utilizar el programa: \033[1;33m./holamundo\033[0m"

calculadora:
	@gcc -Wall -Wextra -Werror calculadora.c -o calculadora
	@echo "Para utilizar el programa: \033[1;33m./calculadora\033[0m"

clean:
	@rm -f holamundo calculadora

fclean: clean
	@clear

re: clean all

.PHONY: holamundo calculadora clean fclean re