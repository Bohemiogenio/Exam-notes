#include <unistd.h>

void ft_putstr(char *str)
{
	char i ;
	i = 0;

	while(str[i])
	{	
		write(1, &str[i++], 1);
	}
}
int main(void)
{
	ft_putstr("camionero");
	return 0;
}
