#include "main.h"

char *app_str(va_list vList, char *temp)
{
	temp = va_arg(vList, char *);
	
	if (!temp || temp == (char *)0)
		temp = "(null)";
	return (temp);
}
