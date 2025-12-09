#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, int size)
{
	int i = 0;

	while (s1[i] && s2[i] && i < size)
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	if (i < size)
		return (1);
	return (0);
}

int main (int ac, char ** av)
{
	int i;
	int size;
	int b_read;
	char buf[9999];
	char c;

	i = 0;
	if (ac != 2 || av[1] == NULL)
		return(1);
	size = strlen (av[1]);

	while ((b_read = read(0, &c, 1)) > 0)
	{
		buf[i] = c;
		i++;
	}
	if (b_read < 0)
	{
		perror("Error"); //write(2, "Error\n" ,6);
		return (1);
	}
	buf[i] = '\0';

	i = 0;
	while (buf[i])
	{
		if (!ft_strncmp(&buf[i], av[1], size))
		{
			write(1, &buf[i], 1);
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
El problema es la funcion strncmp que para mi si es igual es 1 de afirmativo y si no es 0 de negativo, entonces cuando vas a imprimir el buf cambia ! esto.
