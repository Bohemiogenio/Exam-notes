unsigned char reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int i = 0;

	while(i < 8)
	{
		result = result << 1;
		result = result | (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return result;
}

/*#include <stdio.h>

int main (void)
{
	unsigned char n = 13;

	printf("%d\n", reverse_bits(n));
	return 0;
}*/
//13 es = 00001101 y al reves es 10110000 que es = 176

