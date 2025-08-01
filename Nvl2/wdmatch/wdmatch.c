#include <unistd.h>

int main(int a, char **b)
{	
	int i = 0;
	int j = 0;	
		
	if(a == 3)
	{
		while(b[1][i] && b[2][j])
		{
			if(b[1][i] == b[2][j])
				i++;
			j++;
		}
		if(b[1][i] == '\0')
		write(1, b[1], i);		
	}
	write(1, "\n", 1);
	return 0;
}
