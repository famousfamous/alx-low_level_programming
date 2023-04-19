#include "main.h"

/**
 * get_bit - returns the value of index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitval;

	if (index > 63)
		return (-1);

	bitval = (n >> index) & 1;

	return (bitval);
}
