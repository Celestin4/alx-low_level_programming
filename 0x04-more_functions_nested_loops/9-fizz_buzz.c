
#include "stdio.h"

/**
 * main - print numbers from 1 to 100
 * Return: int 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf("%c", ' ');
	}
	printf("%c", '\n');
	return (0);
}
