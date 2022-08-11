#include "main.h"

/**
 * _printf - prints the string passed to it.
 *
 * @format: string to print.
 *
 * Return: length of the stirng printed.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, strlength, numPercent = 0, loopCounter = 0;
	char * currStr;

	va_start(arg, format);
	strlength = strlen(format);
	for (loopCounter = 0; loopCounter < strlength; i++, loopCounter++)
	{
		if (format[loopCounter] == '%' && format[loopCounter + 1] != '%')
		{
			loopCounter++;
			i++;
			numPercent++;
			if (format[loopCounter] == 'c')
			{
				i = _putchar(va_arg(arg, int), i);
				numPercent++;
				loopCounter++;
			}
			else if (format[loopCounter] == 'd')
			{
				i = print_number(va_arg(arg, int), i);
				numPercent++;
				loopCounter++;
			}
			else if (format[loopCounter] == 'u')
			{
				i = print_number((va_arg(arg, unsigned int)), i);
				numPercent++;
				loopCounter++;
			}
			else if (format[loopCounter] == 'i')
			{
				i = print_number(va_arg(arg, int), i);
				numPercent++;
				loopCounter++;
			}
			else if (format[loopCounter] == 's')
			{
				currStr = va_arg(arg, char *);
				if (*currStr == '\0' || !currStr)
					currStr = "(null)";
				i = _puts(currStr, i);
				if (i > strlength)
					break;
				strlength += strlen(currStr);
				numPercent++;
				loopCounter++;
			}
			else if (format[loopCounter] == 'o')
			{
				i = DecimalToOctal(va_arg(arg, unsigned int), i);
				numPercent++;
				loopCounter++;
			}
			else if (format[loopCounter] == 'x')
			{
				i = DecimalToHex(va_arg(arg, unsigned long int), i, 1);
				numPercent++;
				loopCounter++;
			}
			else if (format[loopCounter] == 'X')
			{
				i = DecimalToHex(va_arg(arg, unsigned long int), i, 0);
				numPercent++;
				loopCounter++;
			}
			else if (format[loopCounter] == 'p')
			{
				i = print_pointer(va_arg(arg, void *), i);
				numPercent++;
				loopCounter++;
			}
			else
			{
				i--;
			}
		}
		if (format[loopCounter] == '%' && format[loopCounter + 1] != '%')
		{
			loopCounter--;
			continue;
		}
		if (!format[loopCounter])
			break;
		_putchar(format[loopCounter], i);
	}

	i -= numPercent - 1;
	va_end(arg);
	return (i);
}

