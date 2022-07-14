#include "main.h"

/**
 * printHEXA - calls the HEHA function that prints a hexadecimal.
 * @list: string of characters to be printed.
 * Return: the number of bytes printed.
 */

int printHEXA(va_list list)
{
	unsigned int n;
	int count = 0;

	n = va_arg(list, unsigned int);
	HEXA(n, &count);
	return (count);
}


/**
 * HEXA - returns the hexadecimal number
 * @n: an unsigned int
