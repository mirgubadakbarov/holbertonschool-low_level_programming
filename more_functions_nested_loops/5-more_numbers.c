#include "main.h"

/**
 * print_more_numbers - print numbers 0 to 14, 10 times followed by a new line.
 */

void print_more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	for (i = 0; i <= 14; i++)
		_putchar(i + '0');
		
	_putchar('\n');
}
