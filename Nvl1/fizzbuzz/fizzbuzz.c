#include <unistd.h>

void ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr(i / 10);
	write(1, &"0123456789"[i % 10], 1);
}
	/*Mientras el numero sea mayor de 9,lo dividimos entre 10 y llamamos otra vez a ft_putnbr.
asi vamos cogiendo el digito de mas a la izquierda hasta llegar al de la derecha. 
if (i > 9) es tu caso recursivo: “mientras quede más de un dígito, descompónlo un nivel más	
En la primera llamada con i = 42:
Como 42 > 9, llamas a ft_putnbr(4)
Con i = 4 el if ya no se cumple (4 < 9), así que no recursas y vas directo al write, imprimiendo '4'.
Tras esa impresión la llamada anterior retoma y hace su propio write, imprimiendo '2'.
*/

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		i++;
		write(1, "\n", 1);
	}

}
/*Comprueba primero si i es múltiplo de 3 y de 5.
Si sí, imprime "fizzbuzz" y no mira más condiciones.
Si no lo anterior, entra al primer else if y comprueba si solo es múltiplo de 3.
Si sí, imprime "fizz" y salta al final del bloque.
Si tampoco es múltiplo de 3, pasa al segundo else if y comprueba si es múltiplo de 5.
Si sí, imprime "buzz".
Si ninguna de las anteriores se cumple, entra al else final e imprime el número.
*/
