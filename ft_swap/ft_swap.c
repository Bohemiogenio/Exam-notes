int ft_swap(int *a, int *b)
{
	int temp;

	temp = *a; //Guardamos en temp el valor de *a
	*a = *b; //Ponemos en *a el valor de *b
	*b = temp; //Pones en *b el valor que habia original en *a

}

/*#include <stdio.h>
int main (void)
{
	int x = 5;
	int y = 10;
	
	ft_swap(&x, &y);

	printf("x = %d, y = %d\n",x ,y); //x = 10, y = 5
	return 0;
}*/
