#include <unistd.h>
#include <stdio.h>

int invalid(char *str)
{
	int i = 0;
	int open = 0;
	int close = 0;

	while (str[i])
	{
		if (str[i] == '(')
			open++;
		else if (str[i] == ')')
		{
			if (open > 0)
				open--;
			else
				close++;
		}
		i++;
	}
	return (open + close);
}

int printed_

