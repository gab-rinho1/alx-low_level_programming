#include "main.h"

/**
 * rev_string - a function that resrve a string
 * @s: the value should to be reserve
 * Return: void
 */

void rev_string(char *s)

{
	char str;
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	for (i = 0; i < len / 2; i++)
	{
	str = s[i];
	s[i] = s[len - 1 - i];
	s[len - 1 - i] = str;
	}
}
