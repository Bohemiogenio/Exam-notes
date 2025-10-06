#include <unistd.h>

void ft_union(char *s1, char *s2)
{
	int i = 0;
	unsigned char array[128] = {0};
	int j = 0;
	
	while (s1[i])
	{
		if (!array[(int)s1[i]])
		{
			write(1, &s1[i], 1);
			array[(int)s1[i]] = 1;
		}
	i++;
	}
	while (s2[j])
	{
		if (!array[(int)s2[j]])
		{
			write(1, &s2[j], 1);
			array[(int)s2[j]] = 1;
		}
	j++;
	}	
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);		
	}
	write(1, "\n", 1);
	return (0);
}
