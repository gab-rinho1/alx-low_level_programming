#include "main.h"

/**
 * print_alphabet_x10 - Main alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)

{
	char c;
	int a = 0;

	while (a <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	a++;
	}
}


