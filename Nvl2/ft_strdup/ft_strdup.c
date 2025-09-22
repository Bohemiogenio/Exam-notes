#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		len = 0;
	char	*cpy;
	int		i = 0;

	// Paso 1: obtener la longitud
	while (str[len])
		len++;

	// Paso 2: reservar memoria (+1 para el '\0')
	cpy = malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);

	// Paso 3: copiar el contenido
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0'; // No olvidar el terminador

	return (cpy);
}
/*
#include <stdio.h>

int main(void)
{
	char *original = "hola mundo";
	char *copy = ft_strdup(original);

	if(copy)
	{	
		printf("%s\n", copy);
		free(copy);
	}
	return 0;
}
*/
