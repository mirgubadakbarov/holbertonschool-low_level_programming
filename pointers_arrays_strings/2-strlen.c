#include "main.h"
/**
 * _strlen - Returns length of given string.
 * @s: given string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
