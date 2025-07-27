#include <stdlib.h>

// Devuelve un puntero al primer carácter de s1 que también esté en s2.
char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j;

	while(s1[i])// Recorremos cada carácter de la cadena s1.
	{
		j = 0;
		while(s2[j])// Por cada carácter de s1, comparamos con todos los caracteres de s2.
		{
			if(s1[i] == s2[j])
				return ((char *)&s1[i]);
		// Si encontramos un carácter en común, devolvemos un puntero a esa posición de s1.
		j++;
		}
	i++;
	}
	return NULL;// Si no se encontró ningún carácter de s2 en s1, devolvemos NULL.
}
#include <stdio.h>

int main (void)
{
	printf("Resultado:1 %s\n", ft_strpbrk("hola","ama"));
	printf("Resultado:2 %s\n", ft_strpbrk("hola","chope"));
	printf("Resultado:3 %s\n", ft_strpbrk("hola","ola"));
	printf("Resultado:4 %s\n", ft_strpbrk("hola","reme"));
	return 0;

}

