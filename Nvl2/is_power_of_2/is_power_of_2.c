#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	if(n == 0)
		return 0;//0 no es potencia de 2.
	while(n % 2 == 0)//Mientras sea divisible de 2.
		n = n / 2;//Divide entre 2 y lo guarda en n.
	return (n == 1);//Si el final llegamos a 1, es potencia de 2.
}
