#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t j;
	int check;

	i = 0;
	
	while(s[i])//Recorre cada letra de s.
	{
		j = 0;
		check = 0;
		while(accept[j])//Recorre accept buscando coincidencias.
		{
			if(s[i] == accept[j])// Si el carácter actual de 's' está en 'accept'.
				check = 1;//Marcamos que hay coincidencia.
			j++;
		}
		if(check == 0)
			return (i);//Si no encontro coincidencia se detiene.
	i++;
	}
	return (i);
}

int main (void)
{
	printf("Resultado 1; %zu\n", ft_strspn("abcdef","abcd"));
	printf("Resultado 1; %zu\n", ft_strspn("abcdef","rtgyh"));
	printf("Resultado 1; %zu\n", ft_strspn("abcdef",""));
	printf("Resultado 1; %zu\n", ft_strspn("abcdef","abcdef"));
	return 0;
}
