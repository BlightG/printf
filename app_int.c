#include "main.h"

char *app_int(va_list vList, char *temp)
{
	int num = va_arg(vList, int);
	num_to_str(num, temp, 10, '0');
	return (temp);
}
char *app_unsigned_int(va_list vList, char *temp)
{
	unsigned int num = va_arg(vList, unsigned int);
	num_to_str(num, temp, 10, '0');
	return (temp);
}
