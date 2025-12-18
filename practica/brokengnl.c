#include "brokengnl"

//#include <unistd.h>
//#include <stdlib.h>

char *ft_strchr(char *s, int c)
{
	int i = 0;
	while (s[i] != c) //(s[i] && s[i] != 0)
		i++;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}

void *ft_mencpy(void *dest, const void *src, size_t n)
{
	while (--n > 0)
		((char *)dest)[n - 1] = ((char *)src)[n - 1];
	return (dest);
}


