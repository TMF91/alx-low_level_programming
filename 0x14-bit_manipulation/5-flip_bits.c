#include "main.h"

/**
 * flip_bits - function counts the number of bits to be changed
 * to move from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int previous;
	unsigned long int next = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		previous = next >> i;
		if (previous & 1)
			count++;
	}

	return (count);
}
