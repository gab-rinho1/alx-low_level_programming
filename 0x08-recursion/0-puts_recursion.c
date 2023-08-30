#include "main.h"

/**
 * @s: take a string as input
 *
 * Return: void
 */

void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	_putchar('\n');
}
