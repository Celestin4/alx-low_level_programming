#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the decimal number to modify
 * @index: index of the bit to clear
 * Return: 1 if successful, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
