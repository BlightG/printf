#include "main.h"

/**
 * app_str - returns the string representation of
 * the value passed to _printf.
 *
 * @vList: list of the values passed to _printf.
 * @temp: temp string holding the string representation
 * of the value passed.
 *
 * Return: char pointer to temp.
 */

char *app_str(va_list vList, char *temp)
{
	temp = va_arg(vList, char *);

	if (!temp || temp == (char *)0)
		temp = "(null)";
	return (temp);
}
