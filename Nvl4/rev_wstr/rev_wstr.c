#include <unistd.h>

void rev_wstr(char *str)
{
	int i = 0;
	int start;
	int end;

	while (str[i])
		i++;
	i--;
	while (str[i])
	{
		while (str[i] && (str[i] == 9 || str[i] == 32))
			i--;
		end = i;
		while (str[i] && str[i] != 9 && str[i] != 32)
			i--;
		i++;
		start = i;
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if (i > 0)
			write(1, " ", 1);
		i--;
		
	}	
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_wstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
