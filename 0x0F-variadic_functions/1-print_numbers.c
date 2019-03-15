#include "variadic_functions.h"

/**
 * print_numbers -prints numbers, followed by a new line.
 * @separator: char separator for the string
 * @n: numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
		return;
	/* initialize valist for num number of arguments */
	va_start(valist, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n - 1; i++)
		printf("%i%s", va_arg(valist, int), separator);
	printf("%i\n", va_arg(valist, int));
	/* clean memory reserved for valist */
	va_end(valist);
}
