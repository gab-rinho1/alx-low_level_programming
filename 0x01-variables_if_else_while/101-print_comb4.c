#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{
	int g, m, w;
	for (g = '0'; g < '9'; g++)
	{
	for (m = g + 1; m <= '9'; m++)
	{
	for (w = m + 1; w <= '9';  w++)
	{
	if ((m != g) !=w)
	{
	putchar(g);
	putchar(m);
	putchar(w);
	if (g == '7' && m == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
