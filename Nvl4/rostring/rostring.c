#include <unistd.h>

void rostring(char *str)
{
	int i = 0;
	int space = 0;
	int start;
	int end;
	int print = 0;

	while (str[i] && str[i] < 33)
		i++;
	start = i;
	while (str[i] && str[i] > 32)
		i++;
	end = i - 1;
	while (str[i] && str[i] < 33)
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			space = 1;
		else
		{
			if(space == 1 && print)
				write(1, " ", 1);
			space = 0;
			write(1, &str[i], 1);
			print = 1;
		}
	i++;
	}
	if(print)
		write(1, " ", 1);
	while(start <= end)
	{
		write(1, &str[start], 1);
	start++;	
	}
	
}

int main(int ac, char **av)
{
	if(ac > 1)
	{
		rostring(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
