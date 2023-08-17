#include<stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * positive_or_negative - prints the numeber is positive,else zero or
 * @i: integer
 * negative if the number is less than zero.
 *
 * Return: Always (Success)
 */


void positive_or_negative(int i)

{

	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else
	{
	printf("%d is negative\n", i);
	}

	putchar('\n');
}
