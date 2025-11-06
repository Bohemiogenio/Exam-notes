#include <unistd.h>

int main (int argc, char **argv)
{
	int i;

	if(argc == 2) //verificar 2 argumentos
	{
		i = 0;
		while (argv[1][i]) //contar caracteres sin usar strlen
			i++;
		while (i > 0) /*Salir del bluce anterior esta en el ultimo caracter.
		 "Raul" si le pasamos ese string como 2º argumento termina el bucle del while en i=4.		
		 Por lo tanto, i-- para que empiece en el ultimo caracter*/
		 {
			i--;
			write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}
