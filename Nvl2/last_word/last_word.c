#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if(argc == 2)
	{
		//Ir al final del string.
		while(argv[1][i])
			i++;
		i--;
		//Saltar espacio y Tabuladores finales.
		while(i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i--;
		//Encontrar el inicio de la palabra.
		int end = i;

		while(i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		//Imprimir ultima palabra
		i++;
		while(i <= end)
		{
			write(1, &argv[1][i],1);
			i++;
		}

	}
	write(1, "\n", 1);
	return 0;
}
