#include "main.h"

/**
 * jack_bauer - Prints every min of the day of Jack Bauer
 * Return: ...
 */

void jack_bauer(void)

{
	int g, m;

	for (g = 0; g < 24; g++)
	{
	for (m = 0; m < 50; m++)
	{
	_putchar((g / 10) + '0');
	_putchar((g % 10) + '0');
	_putchar(':');
	_putchar((m / 10) + '0');
	_putchar((m % 10) + '0');
	_putchar('\n');
	}
	}
}
