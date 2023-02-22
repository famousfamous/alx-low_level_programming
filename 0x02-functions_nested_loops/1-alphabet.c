#include "main.h"

/**
 * main - prints the putchar
 * my very first loop statement.
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
