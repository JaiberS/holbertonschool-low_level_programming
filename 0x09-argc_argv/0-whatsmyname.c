#include <stdio.h>

int main (int argc, char *argv[])
{
	int i, j;

	i = argc;
	j = i;
	i = j;
	printf("%s\n",argv[0]);
	return (0);
}
