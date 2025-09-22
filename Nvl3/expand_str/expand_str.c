#include <unistd.h>

void    put_char(char c)
{
    write(1, &c, 1);
}

int     is_space(char c)
{
    /* delimitadores: espacio, tab y fin de cadena al mirar s[i+1] */
    return (c == ' ' || c == '\t' || c == '\0');
}

void    r_capitalizer(char *s)
{
    int i = 0;

    while (s[i])
    {
        /* pasar a minúscula por defecto */
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;

        /* si es letra y el siguiente es delimitador, poner en mayúscula */
        if ((s[i] >= 'a' && s[i] <= 'z') && is_space(s[i + 1]))
            s[i] -= 32;

        put_char(s[i]);
        i++;
    }
}

int     main(int ac, char **av)
{
    int i = 1;

    if (ac == 1)
        put_char('\n');
    else
    {
        while (i < ac)
        {
            r_capitalizer(av[i]);
            put_char('\n');
            i++;
        }
    }
    return (0);
}
