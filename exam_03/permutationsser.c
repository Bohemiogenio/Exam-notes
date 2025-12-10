#include <stdio.h>
#include <stdlib.h>

void swap(char *s1, char *s2)
{
	char tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void sort(char *s1, char *s2, int size)
{
	int i = 0;
	while (i < size - 1)
	{
		int j = i + 1;
		while (s2[j])
		{
			if (s1[i] > s2[j])
				swap(&s1[i], &s2[j]);
			j++;
		}
		i++;
	}
}


void permu(char *str, char *result, int *used, int pos, int size)
{
	if (pos == size)
	{
		puts(result);
		return ;
	}
	int i = 0;
	while (str[i])
	{
		if (!used[i])
		{
			used[i] = 1;
			result[pos] = str[i];
			permu(str, result, used, pos + 1, size);
			used[i] = 0;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	
	int size = 0;
	while (av[1][size])
		size++;
	char *result = calloc(size, sizeof(char *));
	int *used = calloc(size, sizeof(int *));
	permu(av[1], result, used, 0, size);
	return (0);
}
