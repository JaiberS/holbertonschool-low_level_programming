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

	va_start(valist, n);
	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
			printf("%i%s", va_arg(valist, int), separator);
	}
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%i", va_arg(valist, int));
	}
	printf("%i\n", va_arg(valist, int));
	va_end(valist);
}
