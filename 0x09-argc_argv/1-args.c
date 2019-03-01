#include <stdio.h>

int main (int argc, char *argv[])
{
	char *i, *j;

	i = argv[0];
	j = i;
	i = j;
	printf("%i\n",argc - 1);
	return (0);
}
