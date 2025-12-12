#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, int size)
{
	int i = 0;

	while (s1[i] && s2[i] && i < size)
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	int i = 0;
	int size;
	int b_read;
	char c;
	char buf[9999];

	if (ac != 2 || av[1] == NULL)
		return (1);
	size = strlen (av[1]);
	while ((b_read = read(0, &c, 1)) > 0)
	{
		if (b_read < 0)
		{
			fprintf(stderr, "Error: ");
			return (1);
		}
		buf[i] = c;
		i++;
	}
	i = 0;
	while (buf[i])
	{
		if (ft_strncmp(&buf[i], av[1], size))
		{
			write(1, &buf[1], 1);
			i++;
		}
		else
		{
			for (int j = 0; j < size; j++)
				write(1, "*", 1);
			i += size;
		}
	}
	return (0);
}
