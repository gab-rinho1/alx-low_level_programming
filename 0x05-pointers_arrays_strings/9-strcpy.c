#include "main.h"

/**
 *  _strcp - copy string
 *  @dest: destination value
 *  @src: source value
 *  Return: the pointer of dest
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
