#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: char separator for the list
 * @n: list of numbers
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
		return;
/* initialize valist for num number of arguments */
	va_start(valist, n);
/* access all the arguments assigned to valist */
	for (i = 0; i < n - 1; i++)
	{
		printf("%s%s", va_arg(valist, char *), separator);
	}
	printf("%s\n", va_arg(valist, char *));
/* clean memory reserved for valist */
	va_end(valist);
}
