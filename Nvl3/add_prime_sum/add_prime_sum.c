#include <unistd.h>

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	char digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int ft_atoi(char *s)
{
	int i = 0;
	int res = 0;

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
	i++;
	}
	return (res);
}

int prime(int n)
{
	int i = 2;
	int prime = 1;

	if (n < 2)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
	i++;  
	}
	return (prime);
}


int main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = ft_atoi(av[1]);
		int sum = 0;
		int i = 2;
		
		while (i <= n)
		{
			if (prime(i))
				sum += i;
		i++;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	write(1, "0\n", 2);
	return (0);
}
