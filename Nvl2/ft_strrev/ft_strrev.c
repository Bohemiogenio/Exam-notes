#include <stdio.h>

//Esta funcion invierte una cadena (string) de caracteres. Raul = LuaR.
char *ft_strrev(char * str)
{
	int i = 0;//Recorrer str hasta el final.
	int j = 0;
	char tmp;

	while(str[i])//Calcular longitud de la cadena.
		i++;
	while (j < i - 1)//Intercambia los carecteres de atras hacia delante.
	{
		tmp = str[j];//Guarda el primer caracter. tmp = 'R'
		str[j] = str[i - 1];//Sustituimos con el caracter final. 'R' = 'L'
		str[i - 1] = tmp;//Asignar el valor guardado str[3] = 'R'
		j++;//Avanzamos desde el inicio.
		i--;//Retrocedemos desde el final.
	}
	return (str);//Devolver str cuando ya se le ha dado la vuelta. "luaR"
}

int main(void)
{
	char str[] = "Raul";

	printf("%s\n", ft_strrev(str));
	return 0;
}

