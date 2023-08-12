#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Greatness)
 */

int main(void)

{
	int g, w;

	for (g = '0'; g <= '9'; g++)
	{
	
	for (w = g + 1; w <= '9'; w++)
	{
	if (w != g)
	{
	putchar(g);
	putchar(w);
	if (g == '8' && w == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
