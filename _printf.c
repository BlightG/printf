#include "main.h"

int _printf(char *str, ...)
{
	va_list vList;
	int len, i = 0, j = 0, k = 0;
	char *buffer;
	char *temp;
	printer printerFuncs[] = {
		{"c", app_char},
		{"s", app_str},
		{"i", app_int},
		{"d", app_int},
		{"u", app_unsigned_int},
		{"o", app_octal},
		{"x", app_hex},
		{"X", app_hex_cap},
		{"p", app_hex}
	};
	len = _strlen(str);
	if (!str)
		return (-1);
	buffer = malloc(1024);
	if (!buffer)
		return (-1);
	_strcpy(buffer, "");
	temp = malloc(40);
	if (!temp)
	{
		free(buffer);
		return (-1);
	}
	va_start(vList, str);
	while(str[i] != '\0' && str[i])
	{
		if (str[i] == '%')
		{
			i++;
			j = 0;
			while (j < 9 && (str[i] != *(printerFuncs[j].symbol)))
				j++;
			if (j < 9)
			{
				if (printerFuncs[j].symbol[0] == 'p')
				{
					buffer[k] = '0';
					buffer[k + 1] = 'x';
					k += 2;
				}
				temp = printerFuncs[j].print_func(vList, temp);
			}
			else
				temp[0] = str[i];
			strcat(&buffer[k],temp);
			k += _strlen(temp);
			i++;
		}
		else
		{
			buffer[k] = str[i];
			buffer[k + 1] = '\0';
			i++;
			k++;
		}
	}
	buffer[k + 1] = '\0';
	len = _strlen(buffer);
	writeToScreen(buffer, len);
	strcpy(buffer, "");
	free(buffer);	
	va_end(vList);
	return (len);
}

void writeToScreen(char *str, int len)
{
	write(1, str, len);
}
