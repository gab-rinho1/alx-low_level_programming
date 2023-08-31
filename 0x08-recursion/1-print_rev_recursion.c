#include "main.h"

/**
 * _print_rev_recursion - a program that prints a
 * string in reverse
 * @s: take input from string
 * Return: none
 */

void _print_rev_recursion(char *s)

{
	if (*s == '\0')
	{
	return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
