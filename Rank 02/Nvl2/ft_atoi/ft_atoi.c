int ft_atoi(const char *str)
{
	int i = 0; //para recorrer el string carácter a carácter.
	int sign = 1; //guarda el signo del número. Por defecto es positivo (+1).
	int result = 0;//donde construiremos el número final.

	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))/* Este bucle salta todos los espacios
	 y caracteres invisibles (como tabulación o salto de línea).*/
	i++;

	if(str[i] == 43 || str[i] == 45)//Cuando encuentre los simbolos + o -.
	{
		if(str[i] == 45)//Si es '-' el numero sera negativo.
			sign = -1;
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	/* Recorremos los dígitos del string:
	 Cada carácter '0'–'9' tiene valores ASCII del 48 al 57
	 Para obtener el valor numérico real, restamos 48
	 Vamos construyendo el número: result = result * 10 + dígito
	 Ejemplo: "42" → '4' = 4, '2' = 2 → 4 * 10 + 2 = 42*/
	return (result * sign);
}

/*
#include <stdio.h>

int main(void)
{
	printf("Resultado 1: %d\n", ft_atoi("42"));
	printf("Resultado 2: %d\n", ft_atoi("    -123"));
	printf("Resultado 3: %d\n", ft_atoi("    +789"));
	printf("Resultado 4: %d\n", ft_atoi("00100"));
	printf("Resultado 5: %d\n", ft_atoi("\t\n\r  56"));
	printf("Resultado 6: %d\n", ft_atoi("  -0042abc"));
	return 0;

}
*/
