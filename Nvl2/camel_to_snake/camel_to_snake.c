#include <unistd.h>

int main(int a, char **b)
{
	int i = 0;
	 if (a == 2)
	{
		while(b[1][i])
		{	
			if(b[1][i] >= 65 && b[1][i] <= 90)//Busca La primera mayuscula
			{
			b[1][i] += 32; //b[1][i] = b[1][i] + 32; Es lo mismo. 
			write(1, "_", 1);
			}
		write(1, &b[1][i],1);
		i++;
		}
	}
	 write(1, "\n", 1);
	 return 0;
}
