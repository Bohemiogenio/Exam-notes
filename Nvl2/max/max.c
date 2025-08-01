int max(int *tab, unsigned int len)
{
	if(len == 0)
		return 0;
	//Si el array esta viacio, la funcion debe devolver 0.
	unsigned int i = 1;
	int max_val = tab[0];/*Creamos una variable llamada max_val que guarda el primer número del					array.*/
	while(i < len)//Vamos a recorrer toidos los numeros del array,
	{
		if(tab[i] > max_val)/*Conforme pasemos por todos los numero y encontremos uno mayor
					lo guardamos en la siguiente max_val.*/
			max_val = tab[i];
		i++;
	}
	return max_val;//Devolvemos el numero mas grande encontrado.
}
/*#include <stdio.h>
int main(void)
{
	int numeros[]= {4, 9, 2, 15, 7};
	unsigned int len = sizeof(numeros) / sizeof(numeros[0]);

	printf("El numero maximo es: %d\n", max(numeros, len));
	return 0;
}*/
