#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;

	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{	
				argv[1][i] = 155 - argv[1][i];
			}/*Cualquier letra sumada a su opuesta es = 155 entonces solo restando
			 la letra que nos den, tenemos su opuesta.*/
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{	
				argv[1][i] = 219 - argv[1][i];

			} 
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n",1);
	return 0;
}
