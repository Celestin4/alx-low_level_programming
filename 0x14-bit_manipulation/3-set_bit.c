#include "main.h"

/**
 * set_bit - set value of a bit to 1 at a given index
 * @num_ptr: pointer to the decimal number
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *num_ptr, unsigned int index)
{
	unsigned long int power_of_two;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	power_of_two = 1UL << index;
	*num_ptr |= power_of_two;

	return (1);
}
