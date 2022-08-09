#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <math.h>
int DecimalToOctal(unsigned int n, int i);
int DecimalToHex(unsigned long int num, int i, int isLower);
int printhex(unsigned long int hex, int i, int isLower);
int _puts(char *str, int i);
void format_checker(char *format, int i);
int print_number(unsigned long int n, int i);
int _putchar(int c, int i);
int _printf(const char *format, ...);
int print_pointer(void *, int);
#endif
