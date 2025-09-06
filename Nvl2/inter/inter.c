#include <unistd.h>

int main (int ac, char **av)
{
        int i;
        int j;
        int k;

        i = 0;
        if (ac == 3)
        {
                while (av[1][i])
                {
                        j = 0;
                        while (av[2][j])
                        {
                                if (av[1][i] == av[2][j])
                                {
                                        k = 0;
                                        while (k < i)
                                        {
                                                if (av[1][k] == av[1][i])
                                                        break;
                                        k++;
                                        }
                                        if (k == i)
                                                write(1, &av[1][i], 1);
                                        break;
                                }
                                j++;
                        }
                        i++;
                }

        }
        write(1, "\n", 1);
        return (0);
}
