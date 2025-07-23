#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	i = 0;

	if (argc == 2)
	{
		while(argv[1][i]) //Bucle para recorrer el string del 2º argumento.
		{	
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'M') || 
					(argv[1][i] >= 'a' && argv[1][i] <= 'm'))
				/*Le vamos hacer una condicion dentro del while para decirle que
				 si cumple con esta condicion o la otra, tiene que +13.*/
			{	
				char c = argv[1][i] +13; //Aqui creamos una variable sumando esos 13 para luego imprimirla.
				write(1, &c, 1);
			}
			else if ((argv[1][i] >= 'N' && argv[1][i] <= 'Z') ||
					(argv[1][i] >= 'n' && argv[1][i] <= 'z'))
			{
				argv[1][i] -= 13;
				write(1, &argv[1][i], 1);
				/*🟡 Ventajas:
				 Más directo, menos variables.Funciona igual si no 
				 necesitás conservar el valor original.
				 Desventaja:
				 Estás cambiando el contenido de argv[1], lo cual a veces no es 
				 seguro porque argv apunta a una zona de memoria que no deberías
				 modificar (dependiendo del sistema).*/
			}
			else
			{	
			write(1, &argv[1][i], 1);
			}
		i++;
		}
	}
 	write(1, "\n", 1);
        return 0;	
}
