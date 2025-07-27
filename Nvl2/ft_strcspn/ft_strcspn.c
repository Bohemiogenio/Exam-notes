#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;

	while(s[i])
	{
		size_t j = 0;

		while(reject[j])
		{
			if(s[i] == reject[j])
				return (i);
			j++;
		}
	i++;	
	}
	return (i);
}

int main(void)
{
	printf("Resultado1: %zu\n", ft_strcspn("hola", "aeiou"));
	printf("Resultado2: %zu\n", ft_strcspn("prueba", "xyz"));
	printf("Resultado3: %zu\n", ft_strcspn("123456789", "8"));
	printf("Resultado4: %zu\n", ft_strcspn("abcdef", "c"));
	printf("Resultado5: %zu\n", ft_strcspn("sin vocales", "xyz"));
	printf("Resultado6: %zu\n", ft_strcspn("", "abc"));
	printf("Resultado8: %zu\n", ft_strcspn("abcdef", ""));
		return 0;
}
/*
Esta función busca la primera aparición de cualquier carácter de reject dentro de s.

Si no encuentra ninguno, devuelve la longitud completa de s.

printf("Resultado1: %zu\n", ft_strcspn("hola", "aeiou")); Como la primera coincidencia es la (o)y esta en la posicion s[i] = 1 ( la (h) es la posicion 0) te devuelve 1.

OJO!!!
ft_strcspn no devuelve el último índice leído, sino la cantidad de caracteres recorridos sin toparse
con un carácter de reject.

printf("Resultado2: %zu\n", ft_strcspn("prueba", "xyz"));Devuelve el tamaño de (prueba) = 6 al no 
tener coincidencia.
*/
