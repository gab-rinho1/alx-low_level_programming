#include <stdio.h>

/**
 * main - prints two digit seperated by
 * comma.
 * Return: Always (0)
 */

int main(void)

{
	int g, w;
	int a, b, c, d;

	for (g = '0'; g <= 99; g++)
	{
		a = g / 10;
		b = g % 10;

		for (w = '0'; w <= 99; w++)
		{
			c = w / 10;
			d = w % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (a != '9' && b != 8)
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');
	return ('0');
}
