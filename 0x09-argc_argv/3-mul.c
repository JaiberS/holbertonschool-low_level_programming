#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	if (argc == 3)
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
		return (1);
	return (0);
}
