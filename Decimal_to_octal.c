#include "main.h"
/**
 * DecimalToOctal - converts decimals to their octal representation.
 *
 * @num: number to be converted.
 * @i: variable to keep track of string length.
 *
 * Return: length of the string;
 **/
int DecimalToOctal(unsigned int num, int i)
{
	unsigned long int place = 1, oct = 0, rem;

	while (num)
	{
		rem = num % 8;
		oct = oct + (rem * place);
		num = num / 8;
		place = place * 10;
	}
	i = print_number(oct, i);
	return (i);
}
