#include "holberton.h"

/**
 * swap_int - Resets variable to 98 value
 * @a: Value to be changed
 * @b:
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
