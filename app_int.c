#include "main.h"

/**
 * app_int - returns a string containing the temp
 * string.
 *
 * @vList: list of passed values.
 * @temp: string to hold the value of the passed value.
 * Return: string holding the value of the passed value.
 */

char *app_int(va_list vList, char *temp)
{
	int num = va_arg(vList, int);

	num_to_str(num, temp, 10, '0');
	return (temp);
}

/**
 * app_unsigned_int - returns a string containing the temp
 * string.
 *
 * @vList: list of passed values.
 * @temp: string to hold the string of the passed value.
 * Return: string holding the value of the passed value.
 */
char *app_unsigned_int(va_list vList, char *temp)
{
	unsigned int num = va_arg(vList, unsigned int);

	num_to_str(num, temp, 10, '0');
	return (temp);
}
