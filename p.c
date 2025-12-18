#include <stdio.h>
#include <stdlib.h>

void swap(char *s1, char *s2)
{
	char tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void sort(char *s)
{
	int i = 0;
<<<<<<< HEAD

=======
>>>>>>> 3157210 (exam)
	while (s[i])
	{
		int j = i + 1;
		while (s[j])
		{
			if (s[i] > s[j])
				swap(&s[i], &s[j]);
			j++;
		}
		i++;
	}
}
<<<<<<< HEAD
void permu (char *str, char *result, int *used, int pos, int size)
{
	int i = 0;
=======

void permu(char *str, char *result, int *used, int pos, int size)
{
>>>>>>> 3157210 (exam)
	if (pos == size)
	{
		result[size] = '\0';
		puts(result);
		return ;
	}
<<<<<<< HEAD
=======
	int i = 0;
>>>>>>> 3157210 (exam)
	while (i < size)
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
<<<<<<< HEAD
	int size = 0;
=======

	int size = 0;

>>>>>>> 3157210 (exam)
	while (av[1][size])
		size++;

	sort(av[1]);

	char *result = calloc(size + 1, sizeof(char));
	int *used = calloc(size, sizeof(int));
<<<<<<< HEAD

=======
	
>>>>>>> 3157210 (exam)
	permu(av[1], result, used, 0, size);

	free(result);
	free(used);
	return (0);
}
