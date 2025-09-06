#include <unistd.h>

void    rostring(char *str)
{
        int i;
        int j;
        int first_end;
        int printed;

        i = 0;
        while (str[i] && (str[i] == ' ' || str[i] == '\t'))
                i++;

        j = i; 
        while (str[i] && str[i] != ' ' && str[i] != '\t')
                i++;
        first_end = i;

        printed = 0;

        while (str[i])
        {
                while (str[i] && (str[i] == ' ' || str[i] == '\t'))
                        i++;

                if (!str[i])
                        break;

                if (printed)
                        write(1, " ", 1);

                while (str[i] && (str[i] != ' ' && str[i] != '\t'))
                {
                        write(1, &str[i], 1);
                        i++;
                }
                printed = 1;
        }

        if (first_end > j)
        {
                if (printed)
                        write(1, " ", 1);
                while (str[j] && (str[j] != ' ' && str[j] != '\t'))
                {
                        write(1, &str[j], 1);
                        j++;
                }
        }
}

int     main(int ac, char **av)
{
        if (ac >= 2)              
                rostring(av[1]);
        write(1, "\n", 1);
        return (0);
}
