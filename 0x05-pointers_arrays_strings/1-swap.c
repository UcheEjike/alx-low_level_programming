#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @n: take an int 
 * @b: take an int
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
