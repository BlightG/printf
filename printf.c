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
	int i, strlength;

	va_start(arg, format);
	strlength = strlen(format);
	for (i = 0; i < strlength; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				i = _putchar(va_arg(arg, int), i);
			else if (format[i] == 'd')
				i = print_number(va_arg(arg, int), i);
			else if (format[i] == 'u')
				i = print_number((va_arg(arg, unsigned int)), i);
			else if (format[i] == 'i')
				i = print_number(va_arg(arg, int), i);
			else if (format[i] == 's')
				i = _puts((va_arg(arg, char*)), i);
			else if (format[i] == 'o')
				i = DecimalToOctal(va_arg(arg, unsigned int), i);
			else if (format[i] == 'x')
				i = DecimalToHex(va_arg(arg, unsigned long int), i, 1);
			else if (format[i] == 'X')
				i = DecimalToHex(va_arg(arg, unsigned long int), i, 0);
			else if (format[i] == 'p')
				i = print_pointer(va_arg(arg, void *), i);
		}
		_putchar(format[i], i);
	}
	va_end(arg);
	return (i);
}

