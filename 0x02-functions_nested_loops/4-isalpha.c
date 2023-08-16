#include "main.h"

/**
 * _islower - Look for alphabet attribute
 * @c: The character should be Checked
 *
 * Return: 1 for  alphabetic character or 0 for anything else
 * 
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
