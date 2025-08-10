#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	i = 0;

	if(argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		// Verificamos que se han pasado 4 argumentos y que el segundo y tercer argumento son de un solo carácter.
		while(argv[1][i]) //Recorremos el 1º string para modificar los valores.
		{
			if(argv[1][i] == *argv[2]) //Cuando encontremos un valor igual al 2º argumento.
				write(1, &argv[3], 1); //Le ponemos el valor del 3º argumento.
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
