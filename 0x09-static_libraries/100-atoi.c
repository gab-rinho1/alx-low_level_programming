#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: The pointer to convert
 * Return: A integer
 */

int _atoi(char *s)

{
	int c = 0;
	unsigned int ga = 0;
	int man = 1;
	int god = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	man *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	god = 1;
	ga = (ga * 10) + (s[c] - '0');
	c++;
	}
	if (god == 1)
	{
	break;
	}
	c++;
	}
	ga *= man;
	return (ga);
}
