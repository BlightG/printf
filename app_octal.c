#include "main.h"

char *app_octal(va_list vList, char *temp)
{
	unsigned int num = va_arg(vList, unsigned int);
	num_to_str(num, temp, 8, '0');
	return (temp);
}
