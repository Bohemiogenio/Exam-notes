#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_space(char c)
{
	if(c <= 32)
		return 1;
	return 0;
}

int main(int ac, char **av)
{
	int i = 0, space = 0;
	
	if(ac == 2)
	{
		while(is_space (av[1][i])) //Saltamos toso los espacios del principio.
			i++;
			
		while(av[1][i])
		{
	
			if(is_space(av[1][i]))
				space = 1;
			if(!is_space(av[1][i]))
			{	
				if(space)
					ft_putchar(' ');
				space = 0;
				ft_putchar(av[1][i]);
			}
				i++;
		}
	}
	ft_putchar('\n');
	return 0;
}
