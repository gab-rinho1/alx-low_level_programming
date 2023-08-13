#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints two digit seperated by
 * comma.
 * Return: Always (0)
 */

int main(void)

{
	int g, w;

	for (g = 0; g <= 98; g++)
	{
	for (w = g + 1; w <= 99; w++)
	{
	putchar((g / 10) + '0');
	putchar((g % 10) + '0');
	putchar(' ');
	putchar((w / 10) + '0');
	putchar((w % 10) + '0');
	if (g == 98 && w == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return ('0');
}
