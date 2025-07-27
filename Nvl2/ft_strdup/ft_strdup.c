#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	char *copy;

	i = 0;
	while(src[i])//Calculamos la longitud de src.
		i++;
	copy = malloc(i + 1);//Reservamos memoria para la copia (+1 para el '\0')

	if(!copy)
		return NULL; //Si malloc falla, retornamos NULL.
	i = 0;
	while(src[i])//Copia cada caracter de src a copy.
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';//Añadimos el caracter nulo final.

	return copy;
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
