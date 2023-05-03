#include "libvim.h"

char	*colorformat(int format)
{
	char *color;

	\033[0m - Restablece todos los atributos de formato (color y estilo) al predeterminado.
	\033[1m - Establece el formato de negrita.
	\033[2m - Establece el formato de tenue (opaco).
	\033[3m - Establece el formato de cursiva.
	\033[4m - Establece el formato de subrayado simple.
	\033[5m - Establece el formato de parpadeo.
	\033[7m - Establece el formato de inversión de video.
	\033[8m - Establece el formato de ocultación.
	\033[30m - Establece el color de fuente a negro.
	\033[31m - Establece el color de fuente a rojo.
	\033[32m - Establece el color de fuente a verde.
	\033[33m - Establece el color de fuente a amarillo.
	\033[34m - Establece el color de fuente a azul.
	\033[35m - Establece el color de fuente a magenta.
	\033[36m - Establece el color de fuente a cian.
	\033[37m - Establece el color de fuente a blanco.
}