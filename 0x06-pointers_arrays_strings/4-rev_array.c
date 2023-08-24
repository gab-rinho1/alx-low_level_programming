#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int o;
	int p;

	for (o = 0; o < n--; o++)
	{
	p = a[o];
	a[o] = a[n];
	a[n] = p;
	}
}
