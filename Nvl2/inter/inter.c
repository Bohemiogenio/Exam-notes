#include <unistd.h>

int main(int a, char **b)
{
	int i;// indice para recorrer el primer string (b[1])
	int j;// indice para recorrer el segundo string (b[2])
	int k;// indice para verificar duplicados en b[1]
	char c;// almacena el caracter actual de b[1]

	i = 0;
	if(a == 3)// Verificamos que se pasaron exactamente dos argumentos (programa + 2 strings)
	{
		while(b[1][i])// Recorremos cada carácter del primer string
		{
			c = b[1][i];// Guardamos el caracter actual en c

			k = 0;
			while(k < i)// Comprobamos si c ya aparecio antes en b[1]
			{
				if(b[1][k] == c)// Si encontramos c antes en la cadena
				break;// salimos del bucle porque ya se repitio
			k++;
			}
			if(k == i)//Si c no estaba repetido (es la primera vez que aparece)
			{
				j = 0;
				while(b[2][j])//Recorremos el segundo string
				{
					if(b[2][j] == c)/*Si encontramos el caracter c tambien en el
							segundo string*/
					{
						write(1, &c, 1);//Lo imprimimos
						break;//Salimos del bucle porque ya lo imprimimos
					}
					j++;
				}
			}
			i++;//Avanzamos en b[1]
		}
	}
	write(1, "\n", 1);
	return 0;
}
