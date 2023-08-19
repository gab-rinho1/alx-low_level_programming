#include <stdio.h>
#include "main.h"

/**
 * main - prints 1 to 100, print Fizz for 3s
 * and Buzz for 5s
 * Return: 0
 */

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if ((i % 3 == 0) && (i % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if ((i % 3) == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", i);
	}
	if (i < 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
