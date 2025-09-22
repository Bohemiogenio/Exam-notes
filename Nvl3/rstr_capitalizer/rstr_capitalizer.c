#include <unistd.h>

void put_char(char c)
{
	write(1, &c, 1);
}

int is_space(char c)
{
	if(c <= 32)
		return (1);
	return (0);	
}

void r_capitalizer(char *s)
{
    int i = 0;

    while (s[i])
    {
         if (s[i] >= 'A' && s[i] <= 'Z')
             s[i] += 32;
         if ((s[i] >= 'a' && s[i] <= 'z') && is_space(s[i + 1]))
             s[i] -= 32;
         put_char(s[i++]);
    }
}

int main (int ac, char** av)
{
	int i = 1;

	if(ac == 1)
		put_char('\n');
	else
	{
		while(i < ac)
		{
			r_capitalizer(av[i]);
			put_char('\n');
			i++;
		}
	}
}
