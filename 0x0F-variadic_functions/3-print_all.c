#include "variadic_functions.h"

/**
 * print_all -  prints anything.
 * @format: format of the print
 *
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, m0 = 0;
	char *p;

	va_start(valist, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			p = va_arg(valist, char *);
			if (p != NULL)
			{
				printf("%s", p);
				break;
			}
			printf("%p", p);
			break;
		default:
			m0 = 1;
			break;
		}
		if (format[i + 1] != '\0' && m0 == 0)
			printf(", ");
		m0 = 0;
		i++;
	}
	printf("\n");
	va_end(valist);
}
