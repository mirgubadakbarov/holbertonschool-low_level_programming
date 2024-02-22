/*
 * File: 0-putchar.c
 * Auth: Mirgubad Akbarov
 *
 */

#include "main.h"

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char word[] = "_putchar";
	int i;
	int length = sizeof(word) / sizeof(word[0]);

	for(i = 0; i < length - 1; i++)
		_putchar(word[i]);


	_putchar('\n');

	return (0);
}
