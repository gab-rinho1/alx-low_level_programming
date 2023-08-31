#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - give the natural squre root of a
 * number
 * @n: num to calculate the nature squre root
 * Return: the natural squre root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - squre root to calculate natural number
 * @n: the num to calculate the squre root
 * @i: iterate num
 * Return: the natural squre root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
