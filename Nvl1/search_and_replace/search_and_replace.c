#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	i = 0;

	if(argc == 4)
	{
		if(!argv[2][0] || argv[2][1] || !argv[3][0] || argv[3][1])
			/* Le decimos que si en el segundo y tercer argumentos es distinto a un solo
			 caracter, ya que la posicion 0 seria una 'a' y la 1 es el final que es '\0'.
			 que se salga imprimiendo un salto de linea.*/
		{
			write(1, "\n", 1);
			return 0;
		}

		char from = argv[2][0];
		char to = argv[3][0];
		/*Guardamos los valores tanto del 2º y 3º argumentos en dos variables.*/
	
		while(argv[1][i]) //Recorremos el 1º string para modificar los valores.
		{
			if(argv[1][i] == from) //Cuando encontremos un valor igual al 2º argumento.
				write(1, &to, 1); //Le ponemos el valor del 3º argumento.
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
