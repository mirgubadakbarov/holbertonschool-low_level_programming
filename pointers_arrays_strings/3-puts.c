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

    while (*ptr)
        ptr++;

    write(1, str, ptr - str);
}
