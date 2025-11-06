#include <stdlib.h>

int     *ft_range(int start, int end)
{
        int i;
        int len;
        int *tab;

        i = 0;
        if (start > end)
                len = (start - end) + 1;
        else
                len = (end - start) + 1;
        tab = malloc(sizeof(int) * len);
        while (i < len)
        {
                tab[i] = start;
                if (start > end)
                        start --;
                else if (end > start)
                        start ++;
                i++;
        }
        return (tab);
}

