#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	int i = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return res;
}

int is_prime(int n)
{
    int i;

    if (n < 2)
        return 0;
    i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}


void ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0'; 
	write(1, &c, 1);
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
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
		return 0;
	}
	write(1, "0\n", 2);
	return 0;
}

