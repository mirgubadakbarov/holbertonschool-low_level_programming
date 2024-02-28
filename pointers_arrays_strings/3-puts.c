#include "main.h"

/**
 * _puts - prints given string.
 *
 * @str: given string to printing. 
 *
 */

void _puts(char *str)
{
	char *ptr = str;

    // Move pointer to the end of the string
    while (*ptr)
        ptr++;

    // Write string to standard output
    write(1, str, ptr - str);
}
