#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int i, sum = 0;
	char *j;

	if(argc < 1)
	{
		printf("0");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		strtol (argv[i],&j,10);
		if (j[0] == '\0')
			sum = sum + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", sum);
	return (0);
}
