#include "main.h"

/**
 * print_rev - print a string in reserve
 * follow by a new line
 * @s: the string to be printed
 * Return: void
 */

void print_rev(char *s)

{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
	len++;
	i++;
	}
	len = len - 1;

	while (len >= 0)
	{
	_putchar(s[len]);
	len--;
	}
	_putchar('\n');
}
