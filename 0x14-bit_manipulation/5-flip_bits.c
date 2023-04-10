#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to be flipped to convert n to m
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count = 0;

	diff = n ^ m;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}

