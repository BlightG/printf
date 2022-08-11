#include "main.h"

/**
 * _puts - print a string
 *
 * @str: string pointer
 * @i: string length coutner.
 * Return: nothing
*/

int _puts(char *str, int i)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (!&str[j])
			break;
		write(1, &str[j], 1);
		i++;
	}

	return (i);
}
