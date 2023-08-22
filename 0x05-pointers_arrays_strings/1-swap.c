#include "main.h"

/**
 * swap_int - swaps values of integers
 * @n: take an int
 * @a: take an int
 * @b: take an int
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
