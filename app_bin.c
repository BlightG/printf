#include "main.h"

/**
 * app_bin - returns a string containing the temp
 * string.
 *
 * @vList: list of passed values.
 * @temp: string to hold the value of the passed value.
 * Return: string holding the value of the passed value.
 */

char *app_bin(va_list vList, char *temp)
{
	int num = va_arg(vList, int);

	num_to_str(num, temp, 2, '0');
	return (temp);
}
