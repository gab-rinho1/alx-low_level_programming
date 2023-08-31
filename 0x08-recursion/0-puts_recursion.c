#include "main.h"

/**
 * _puts_recursion - print a string follow
 * by a new line.
 * @s: take a string as input
 *
 * Return: none
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
