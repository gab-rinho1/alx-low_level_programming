#include "main.h"

/**
 * print_triangle - the size of a triangle
 * @size: the size of the triangle
 * Return: none
 */

void print_triangle(int size)
{
	int i, j, n;

	for (i = 1; i <= size; i++)
	{
	for (j = 0; j < size - i; j++)
	{
	_putchar(' ');
	}
	for (n = 0; n < i; n++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	if (size <= 0)
	{
	_putchar('\n');
	return;
	}
}
