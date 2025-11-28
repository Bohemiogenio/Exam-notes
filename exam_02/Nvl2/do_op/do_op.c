#include <stdio.h>
#include <stdlib.h>

int main(int a, char **b)
{
	if(a == 4)
	{
		switch(b[2][0])
		{
			case '+':
				printf("%d", atoi(b[1]) + atoi(b[3]));
				break;
			case '-':
				printf("%d", atoi(b[1]) - atoi(b[3]));
                                break;
			case '*':
				printf("%d", atoi(b[1]) * atoi(b[3]));
                                break;
			case'/':
				printf("%d", atoi(b[1]) / atoi(b[3]));
                                break;
			case '%':
				printf("%d", atoi(b[1]) % atoi(b[3]));
                                break;
		}
	}
	printf("\n");
}
