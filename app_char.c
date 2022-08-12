#include "main.h"
/**
 * app_char - function to print a character
 *
 * @vList: list of a variadic function
 * @temp: pointer to a string of the input
 *Return:temp
*/
char *app_char(va_list vList, char *temp)
{
	int i = 0;

	temp[i] = (va_arg(vList, int));
	return (temp);
}
