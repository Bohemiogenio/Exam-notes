#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int look[256] = {0};
	unsigned char c;

	if (ac == 3)
	{
		while (av[1][i])
		{
			c = (unsigned char)av[1][i];
			if (!look[c])
			{
				write(1, &av[1][i], 1);
				look[c] = 1;
			}
		i++;
		}
		i = 0;
		while (av[2][i])
		{
			c = (unsigned char)av[2][i];
		        if (!look[c])
			{
                                write(1, &av[2][i], 1);
				look[c] = 1;
			}
                i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
