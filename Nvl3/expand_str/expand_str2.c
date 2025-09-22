#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{

		while (is_space(av[1][i]) && av[1][i] != '\0')
		{
		i++;
		}
		while (av[1][i])
		{
			if (!is_space(av[1][i]))
			{
				ft_putchar(av[1][i]);
			
			}
			if (is_space(av[1][i]) && av[1][i + 1] != '\0' && !is_space(av[1][i + 1]))
			{
				ft_putchar(' ');
				ft_putchar(' ');
				ft_putchar(' ');
			}
		i++;	
		}
	}
	ft_putchar('\n');
	return (0);

}
