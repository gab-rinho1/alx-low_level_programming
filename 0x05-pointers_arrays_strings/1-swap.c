#include "main.h"

/**
 * swap_int - a functions that swaps
 * the value of two integer
 * @a: the first integer is swap to b
 * @b: the first integer is swap to a
 *
 * Return: none
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
