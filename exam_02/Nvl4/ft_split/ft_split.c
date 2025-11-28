#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	char **split = malloc(sizeof(char *) * 1000);//Aqui iran direcciones de cada memoria.
	int i = 0; //.................................Recorrer split.
	int j = 0;//..................................Recorrer str.

	if (!split)
		return (NULL);//......................Si falla el malloc.
	while (str[j])//..............................Bucle principal sobre la cadena.
	{
		while (str[j] < 33 && str[j] != '\0')//..Saltarse espacios,tab,etc.
			j++;
		if (str[j] == '\0')//.................Si llegamos al final, no hay mas que extraer.
			break ;
		char *start = &str[j];//..............Guarda un puntero al inicio de la palabra.
		while (str[j] >= 33)//................Avanzo mientras el caracter no sea separador.
			j++;
		int len = &str[j] - start;//.........Longitud = diferencia entre final y inicio palabra.
		split[i] = malloc(sizeof(char) * (len + 1));//Bucle chars para esa palabra.
		if (!split[i])//.....................Si falla malloc.
			return (NULL);
		int k = 0;
		while (k < len)//...................Recorre el espacio que hemos guardado dandole valor.
		{
			split[i][k] = start[k];
			k++;
		}
		split[i][len] = '\0';
		i++;
	}
	split[i] = NULL;
	return (split);
}
