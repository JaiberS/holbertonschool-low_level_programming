#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 *
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0.0;
	unsigned int i;

	/* initialize valist for num number of arguments */
	va_start(valist, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++) {
		sum += va_arg(valist, int);
	}

	/* clean memory reserved for valist */
	va_end(valist);

	return sum;
}
