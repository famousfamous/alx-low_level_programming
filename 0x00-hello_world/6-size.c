#include <stdio.h>
/**
 * main - a programme that prints various variable and their sizeof function.
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("The size of a char is: %lu (bytes).\n", (unsigned long)sizeof(a));
printf("The size of an int is: %lu (bytes).\n", (unsigned long)sizeof(b));
printf("The size of a long int is: %lu (bytes).\n", (unsigned long)sizeof(c));
printf("The size long long int is: %lu (bytes).\n", (unsigned long)sizeof(d));
printf("The size of a float is: %lu (bytes).\n", (unsigned long)sizeof(f));
return (0);
}
