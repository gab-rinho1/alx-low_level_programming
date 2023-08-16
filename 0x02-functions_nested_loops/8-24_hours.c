#include "main.h"

/**
 * jack_bauer - Prints every min of the day of Jack Bauer
 * Return: ...
 */

void jack_bauer(void)

{
	int g, m, w, l;

	for (g = 0; g <= 2; g++)
	{
	for (m = 0; m <= 9; m++)
	{
	if ((g <= 1 && mi <= 9) || (g <= 2 && m <= 3))
	{
	for (w = 0; w <= 5; w++)
	{
	for (l = 0; l <= 9; l++)
	{
	_putchar(g + '0');
	_putchar(m + '0');
	_putchar(58);
	_putchar(w + '0');
	_putchar(l + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
