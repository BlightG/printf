#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
/** printers **/
int _printf(char *, ...);
void writeToScreen(char *, int);

int _strlen(char *);
void _strcat(char *, char *);
/** struct for printer functions **/
/**
 * struct print - struct used to map
 * symbols to functions.
 *
 * @symbol: key used to identify type.
 * @print_func: pointer to function.
 */

typedef struct print
{
	char *symbol;
	char* (*print_func)(va_list, char *);
} printer;

/** print helpers **/
char *app_char(va_list, char *);
char *app_str(va_list, char *);
char *app_int(va_list, char *);
char *app_bin(va_list, char *);
char *app_unsigned_int(va_list, char *);
char *app_octal(va_list, char *);
char *app_hex(va_list, char *);
char *app_hex_cap(va_list, char *);
/** utils **/
void num_to_str(unsigned long int, char *, int, char);

/** string utils **/
int _strlen(char *);
void _strcat(char *, char *);
void _strcpy(char *, char *);
#endif
