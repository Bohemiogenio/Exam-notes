char *ft_strcpy(char *s1, char *s2)
{
	unsigned int i;
	i = 0;

	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*#include <stdio.h>
int main(void)
{
	char dest[100];
	ft_strcpy(dest,  "cadena1");
	printf("resultado : %s\n", dest);
	return 0;
}*/
