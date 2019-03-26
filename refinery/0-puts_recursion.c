#include <stdio.h>
#include <stdlib.h>




void _puts_recursion(char *s)
{
	if (s[0] == '\0')
        {
                putchar('\n');
        }
	if (s[0] != '\0')
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
