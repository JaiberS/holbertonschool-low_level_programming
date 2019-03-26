#include <stdio.h>

int main (int argc, char *argv[])
{
	int i, j = 0;
	for (; j < argc; j++)
	{
		printf("%i : \n",j);
		for (i = 0; argv[j][i] != '\0'; i++)
			printf("%c\n", argv[j][i]);
	}
	return (0);
}
