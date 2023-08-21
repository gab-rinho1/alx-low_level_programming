#include "main.h"

/**
 *  _strlen - Returns the length of a string.
 * @s: The string to get the length
 * Return: The length of @str.
 */
int _strlen( char *s)

{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
	
}
