#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @binary: pointer to a string of 0 and 1 characters
 *
 * Return: the converted number, or 0 if `binary` is NULL or contains non-binary
 *         characters
 */
unsigned int binary_to_uint(const char *binary)
{
        unsigned int total = 0, power = 1;
        int len;

        if (binary == NULL)
                return (0);

        for (len = 0; binary[len] != '\0'; len++)
        {
                if (binary[len] != '0' && binary[len] != '1')
                        return (0);
        }

        for (len--; len >= 0; len--, power *= 2)
        {
                if (binary[len] == '1')
                        total += power;
        }

        return (total);
}
