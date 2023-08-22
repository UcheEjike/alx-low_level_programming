#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: a pointer to a char
 *
 * Return: length of a string
 */

int _strlen(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
	{
		_putchar('\n');
		break;
	}
	if (count % 2 == 0)
	{
		_putchar(str[count]);
		count++;
	}
	
	}
}
