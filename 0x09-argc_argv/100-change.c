#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int i, j = 0;

	if(argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i > 0)
	{
		if (i % 25 == 0)
		{
			i = i - 25;
			j++;
		}
		else if (i % 10 == 0)
                {
                        i = i - 10;
                        j++;
                }
		else if (i % 5 == 0)
                {
                        i = i - 5;
                        j++;
                }
		else if (i % 2 == 0)
                {
                        i = i - 2;
                        j++;
                }
		else if (i % 1 == 0)
                {
                        i = i - 1;
                        j++;
                }
	}
	printf("%i\n", j);
	return (0);
}
