#include "main.h"

/**
 * app_hex - used to store hexa string in temp
 * string.
 *
 * @vList: list to accept variable input.
 * @temp: temp string to store value of the current var.
 *
 * Return: string pointer to temp variable.
 */

char *app_hex(va_list vList, char *temp)
{
	unsigned long int num = va_arg(vList, unsigned long int);

	num_to_str(num, temp, 16, 'x');
	return (temp);
}
/**
 * app_hex_cap - used to store hexa string in temp
 * string. (capital).
 *
 * @vList: list to accept varible input.
 * @temp: temp stirng to store value of the current var.
 *
 * Return: string pointer to temp variable.
 */

char *app_hex_cap(va_list vList, char *temp)
{
	unsigned long int num = va_arg(vList, unsigned long int);

	num_to_str(num, temp, 16, 'X');
	return (temp);
}
