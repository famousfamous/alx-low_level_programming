#include "main.h"

/**
 * main - prints the putchar
 * print_alphabet - to print each alphabet.
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
