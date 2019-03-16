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
	char *p;

	va_start(valist, n);
	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			p =  va_arg(valist, char *);
			if (p != NULL)
				printf("%s%s", p, separator);
			else
				printf("%p", p);
		}
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			p =  va_arg(valist, char *);
			if (p != NULL)
				printf("%s", p);
			else
				printf("%p", p);
		}
	}
	p =  va_arg(valist, char *);
	if (p != NULL)
		printf("%s\n", p);
	else
		printf("%p\n", p);
	va_end(valist);
}
