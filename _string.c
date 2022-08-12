#include "main.h"
/**
 * _strlen - counts length of string
 *
 * @str: string to be counted
 * Return: length of stirng
*/
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcat - catonatoes dest to src
 *
 * @dest: destination array
 * @src:source array
 *
*/
void _strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';

}
/**
 * _strcpy - copies value of str2 to str1
 *
 * @str1:copy destination
 * @str2:copy source
 *
*/
void _strcpy(char *str1, char *str2)
{
	int i = 0;

	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
}
