#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @i: variable to keep track of string length.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(int c, int i)
{

	write(1, &c, 1);
	i++;
	return (i);

}