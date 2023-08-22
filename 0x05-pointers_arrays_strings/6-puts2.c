#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: a pointer to a char
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	l = i;

	return (l);
}
