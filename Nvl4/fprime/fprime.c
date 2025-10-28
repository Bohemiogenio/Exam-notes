#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
	int i = 2;
	if (n < 2)
		return (0);
	while (i < n)
	{
		if(n % i == 0)
			return 0;
	i++;
	}
	return (1);
}

void fprime(int n)
{
	int i = 2;
	int first = 1;

	if (n == 1)
	{
		printf("1");
	return;
	}

	while (i <= n)
	{
		if (is_prime(i))
		{
			while (n % i == 0)
			{
				if (!first)
					printf("*");
				printf("%d", i);
				n /= i;
				first = 0;
			}
		}
	i++;
	}
	
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = atoi(av[1]);
		fprime(n);
	}
	printf("\n");
	return (0);	
}
