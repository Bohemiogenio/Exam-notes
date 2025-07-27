int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	 
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	/* Mientras se cumplan todas estas condiciones:

s1[i]: el carácter actual de s1 no es el carácter nulo ('\0'), o sea que la cadena no ha terminado.

s2[i]: lo mismo para s2.

s1[i] == s2[i]: el carácter actual de ambas cadenas es igual.*/
	return (s1[i] - s2[i]);//Devolvemos la diferencia entre los dos strings.

}
/*
#include <stdio.h>

int main(void)
{
	printf("Resultado: %d\n", ft_strcmp ("hola", "hola" ));
	printf("Resultado: %d\n", ft_strcmp ("casa", "hola" ));
	printf("Resultado: %d\n", ft_strcmp ("hola", "hol1" ));
	return 0;
}
*/
