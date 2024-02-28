#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: Integer 1 to swaped.
 * @b: Integer 2 to swaped.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
