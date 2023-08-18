#include "main.h"

/**
 * _isupper - Checks for upper case characters
 * @c: is the value to be check if it's a upper-
 * case.
 * Return: 1 or 0
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
