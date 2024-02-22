/*
 * File: 0-holberton.c
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
	char word [] = "_putchar";
	int i;
	int length = sizeof(word);

	for(i = 0; i < length; i++)
		_putchar(word[i]);


	_putchar('\n');

	return (0);
}
