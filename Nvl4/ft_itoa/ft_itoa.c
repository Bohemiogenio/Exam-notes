#include <stdlib.h>

char *ft_itoa(int nbr)
{
	long long n = nbr; //variable para guardar el valor min.
	int len = 0; //Tamaño.
	char *result; //Devolver con el cambio de int a char.

	if (nbr <= 0) //.....................inicio calculo de tamaño para guardar memoria.
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}

	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0'; //...............Fin reserva de memoria.
	
	if (nbr == 0)
	{
		result[0] = '0';
		return (result); //..........Caso especial de 0.
	}

	n = nbr; //.........................Volvemos a decir que n tiene el valor inicial de nbr.
	if (n < 0)
	{
	result[0] = '-';
		n = -n;
	} //.................................Gestion de negativos.

	while (n)
	{
		result[--len] = (n % 10) + '0';
		n /= 10;
	}//..................................Rellena cadena con digitos(de atras hacia adelante).
	return(result);
}
