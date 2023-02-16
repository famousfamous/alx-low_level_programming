#include <stdio.h>
/**
 * main - a programme that prints various variable and their sizeof function.
 * Return: 0
 */
int main(void)
{
printf("The size of a char is: %zu byte(s).\n", sizeof(char));
printf("The size of an int is: %zu byte(s).\n", sizeof(int));
printf("The size of a long int is: %zu byte(s).\n", sizeof(long int));
printf("The size long long int is: %zu byte(s).\n", sizeof(long long int));
printf("The size of a float is: %zu byte(s).\n", sizeof(float));
return (0);
}
