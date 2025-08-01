#include <unistd.h>
void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while(i--)
	{
		bit = (octet >> i) & 1;
		if(bit == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}
#include <stdio.h>
int main(void)
{
	print_bits(13);
	return 0;
}
