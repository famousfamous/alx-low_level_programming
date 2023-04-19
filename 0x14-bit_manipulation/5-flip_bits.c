#include "main.h"

/**
 * flip_bits - counts the bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int curr;
	unsigned long int xclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		curr = xclusive >> x;
		if (curr & 1)
			counter++;
	}

	return (counter);
}
