#include "main.h"
/**
 * DecimalToHex - converts decimal to hexadecimal.
 *
 * @num: number to be converted.
 * @i: keeps track of the string length.
 * @isLower: flag to check whether the hexa should be lower
 * or upper.
 *
 * Return: length of the string.
 */
int DecimalToHex(unsigned long int num, int i, int isLower)
{
	unsigned long int  rem;

	rem = num % 16;

	if (num / 16 > 0)
		DecimalToHex(num / 16, i, isLower);

	i = printhex(rem, i, isLower);

	return (i);
}
/**
 * printhex - prints hex values.
 *
 * @hex: hex value represented as int.
 * @i: value to hold the length of the string.
 * @isLower: flag to check if the hexa is in lower or
 * upper.
 *
 * Return: length of the string.
 */
int printhex(unsigned long int hex, int i, int isLower)
{
	int rem;
	char *x, *X;

	x = "abcdef";
	X = "ABCDEF";
	rem = hex - 10;

	if (hex < 10)
	{
		i = _putchar((hex + 48), i);
		return (i);
	}
	else if (hex >= 10 && hex <= 15)
	{
		if (isLower)
		{
			i = _putchar(x[rem], i);
		}
		else
		{
			i = _putchar(X[rem], i);
		}
		return (i);
	}
	return (0);
}
/**
 * print_pointer - prints pointers as hex.
 *
 * @ptr: pointer to be printed.
 * @i: length of the string to be printed.
 * Return: lenght of the string.
 */
int print_pointer(void *ptr, int i)
{
	int zero = '0';
	int xforpointer = 'x';

	write(1, &zero, 1);
	write(1, &xforpointer, 1);
	i = DecimalToHex((unsigned long int) ptr, i, 1);

	return (i);
}
