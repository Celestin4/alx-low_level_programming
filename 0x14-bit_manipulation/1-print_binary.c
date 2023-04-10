#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @num: decimal number to convert to binary and print
 */
void print_binary(unsigned long int num)
{
	unsigned long int temp;
	int bit_count = 0;

	if (num == 0)
	{
		printf("0");
		return;
	}

	// Count the number of bits in the input number
	for (temp = num; temp > 0; temp >>= 1)
	{
		bit_count++;
	}

	// Print the binary representation of the number, starting from the highest bit
	for (int i = bit_count - 1; i >= 0; i--)
	{
		if ((num >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
