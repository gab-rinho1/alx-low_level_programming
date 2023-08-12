#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Greatness)
 */

int main(void)

{
	int hd;
	char low;

	for (hd = '0'; hd <= '9'; hd++)
	putchar(hd);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
