#include <stdio.h>
#include <stdlib.h>

void pgcd(int a, int b)
{
	int tmp;
	
	while (b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	printf("%d", a);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		pgcd(atoi(av[1]), atoi(av[2]));
	}
	printf("\n");
	return (0);
	
}	
