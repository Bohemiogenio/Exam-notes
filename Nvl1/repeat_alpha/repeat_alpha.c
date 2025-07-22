#include <unistd.h>

int main(int argc , char **argv)
{
	int i;
	int j;
	
	if (argc == 2) /* argc == 2 → significa que el usuario pasó 1 argumento
			  además del nombre del programa */
	{	
		i = 0;

		while (argv[1][i]) /*recorre el argumento*/
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90) /*si es mayuscula entra aqui*/
			{	
				j = 0;
				while (j < argv[1][i] - 64)
				{
					write(1, &argv[1][i], 1);
					j++;
				}	
					/*Si le pasamos el valor de C que en codigo ascii es de 67
					 * este bucle hace que reste 67 - 64 = 3, y como j < 3
					 * entra 3 veces en el bucle e imprime 3 letras C */
				
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122) /*si es minuscula*/
			{
				j = 0;
				while (j < argv[1][i] - 96)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write(1, &argv[1][i], 1); /* Que imprima en pantalla todo lo que
							     no sea letras*/
			i++;
		}
	}
	write(1, "\n", 1); /*salto de linea final*/
	return 0;
}
