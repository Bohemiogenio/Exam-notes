#include <unistd.h> //libreria para poner el write

int main (int argc, char **argv)
{
		if (argc == 2) /*vemos que solo hay dos argumentos en los ejemplos por que
			       * uno es el nombre del archivo (first_word) y otro argumento es
			       * lo que mandamos en comillas ""*/
	{
		unsigned int i;
		i = 0;

		while (argv[1][i] == 32 || argv[1][i] == '\t')
			i++;
		/*Le vamos a decir con codigo ascii que si el primer argumento es espacio '32'
		* o tabulador '9' que avance*/
		while ((argv[1][i] != 32 && argv[1][i] != '\t') && argv[1][i])
			       write(1, &argv[1][i++], 1);
		/*Con el ultimo while le decimos que si es distinto a 32 y 9 en ascii,
		 * y el caracter actual no es final de string ( && argv[1][i]) entra en el bucle
		 */
	}
	write(1, "\n", 1); //vemos un salto de linea en el enunciado al hacer cat -e al final.
	return (0);
}
