# Text color
T_BLACK = \033[30m
T_RED = \033[31m
T_GREEN = \033[32m
T_YELLOW = \033[33m
T_BLUE = \033[34m
T_MAGENTA = \033[35m
T_CYAN = \033[36m
T_WHITE = \033[37m

# Text style
BOLD = \033[1m
ITALIC = \033[3m
UNDERLINE = \033[4m
STRIKETHROUGH = \033[9m

# Background color
B_BLACK = \033[40m
B_RED = \033[41m
B_GREEN = \033[42m
B_YELLOW = \033[43m
B_BLUE = \033[44m
B_MAGENTA = \033[45m
B_CYAN = \033[46m
B_WHITE = \033[47m

# Reset everything
RESET = \033[0m

all:
	@echo "\033[1;32mComandos disponibles: \
	\033[0;33m\
	holamundo, \
	calculadora, \
	esprimo, \
	nprimo, \
	semaforo, \
	biblioteca, \
	rubik, \
	clean, \
	fclean \
	\033[0m"

holamundo:
	@gcc -Wall -Wextra -Werror holamundo.c -o holamundo
	@echo "Para utilizar el programa: $(T_YELLOW)$(BOLD)./holamundo$(RESET)"

calculadora:
	@gcc -Wall -Wextra -Werror calculadora.c -o calculadora
	@echo "Para utilizar el programa: $(T_YELLOW)$(BOLD)./calculadora$(RESET)"

esprimo:
	@gcc -Wall -Wextra -Werror esprimo.c -o esprimo
	@echo "Para utilizar el programa: $(T_YELLOW)$(BOLD)./esprimo$(RESET)"

nprimo:
	@gcc -Wall -Wextra -Werror nprimo.c -o nprimo
	@echo "Para utilizar el programa: $(T_YELLOW)$(BOLD)./nprimo$(RESET)"

semaforo:
	@gcc -Wall -Wextra -Werror semaforo.c -o semaforo
	@echo "Para utilizar el programa: $(T_YELLOW)$(BOLD)./semaforo$(RESET)"
biblioteca:
	@gcc -Wall -Wextra -Werror biblioteca.c -o biblioteca
	@echo "Para utilizar el programa: $(T_YELLOW)$(BOLD)./biblioteca$(RESET)"

rubik:
	@gcc -Wall -Wextra -Werror rubik.c -o rubik
	@echo "Para utilizar el programa: $(T_YELLOW)$(BOLD)./rubik$(RESET)"

clean:
	@rm -f holamundo calculadora esprimo nprimo semaforo biblioteca rubik

fclean: clean
	@clear

re: clean all

.PHONY: holamundo calculadora esprimo nprimo semaforo biblioteca rubik clean fclean re
