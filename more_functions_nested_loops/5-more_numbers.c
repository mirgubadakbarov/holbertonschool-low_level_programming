#include "main.h"

/**
 * more_numbers - print numbers 0 to 14, 10 times followed by a new line.
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	for (i = 0; i <= 14; i++)
		_putchar(j + '0');
		
	_putchar('\n');
}
