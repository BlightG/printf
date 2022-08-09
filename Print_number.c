#include"main.h"

/**
 * print_number - Prints an integer.
 * @i: variable to keep track of the string length.
 * @n: The integer to be printed.
 * Return: string length.
*/

int print_number(unsigned long int n, int i)
{
	unsigned long int num = n;

	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number((num / 10), i);

	/*print the last digit*/
	i = _putchar(((num % 10) + 48), i);
	return (i);
}
