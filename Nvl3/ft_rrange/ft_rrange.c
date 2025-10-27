#include <stdlib.h>

int *ft_rrange(int start, int end)
{	
	int i = 0;
	int *result;
	int len;

	if (start > end)
	len = start - end + 1;

	else
	len = end - start + 1;

	result = malloc(sizeof(int) * len);
	
	if (!result)
		return (NULL);

	if (start <= end)
	{
		while (i < len)
		{
			result[i] = end;
			i++;
			end--;
		}
		
	}
	else
	{
		while (i < len)
		{
			result[i] = end;
			i++;
			end++;
		}
	}
	return (result);
}
