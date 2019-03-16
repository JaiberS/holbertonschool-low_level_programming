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

        /* initialize valist for num number of arguments */
	va_start(valist, format);
        /* access all the arguments assigned to valist */
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			m0 = 1;
			break;

		case 'i':
			printf("%i", va_arg(valist, int));
			m0 = 1;
			break;

		case 'f':
			printf("%f", va_arg(valist, double));
			m0 = 1;
			break;

		case 's':
			printf("%s", va_arg(valist, char *));
			m0 = 1;
			break;

		default:
			;
		}
		if (format[i + 1] != '\0' && m0 == 1)
		{
			printf(", ");
			m0 = 0;
		}
		i++;
	}
	printf("\n");
        va_end(valist);
}
