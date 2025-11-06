#include <unistd.h>

int  is_spaces(char c)
{
	return (c == ' ' || c == '\t');
}

void ft_expand_str(char *str)
{
	int i = 0;
	int flag = 0;

	while (str[i])
	{
		while (str[i] && is_spaces(str[i]))
			i++;
		if (!str[i])
			break ;
		if (flag)
			write(1, "   ", 3);
		while (str[i] && !is_spaces(str[i]))
		{
			write(1, &str[i], 1);
		i++;
		}
		flag = 1;
	}
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_expand_str(av[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
