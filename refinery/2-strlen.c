#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s)
{
	int i = 0;

	for (; s[0] != '\0'; i++, s++)
		;
	return (i);
}
