#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 * @num: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: value of bit at index, or -1 if error
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned long int shifted_num;

	if (index > 64)
		return (-1);

	shifted_num = num >> index;

	return (shifted_num & 1);
}
