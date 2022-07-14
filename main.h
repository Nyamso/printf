#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct printf - a function for conversion specifiers
 * and their corresponding functions.
 * @t: The specifier
 * @f: the corresponding function
 */

typedef struct printf
{
	char t;