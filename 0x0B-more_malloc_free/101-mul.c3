#include <stdio.h>
#include <stdlib.h>

void reverse_array(char *a, int n)
{
        int i = 0, j;

        n = n - 1;
        for (; n >= i; n--)
        {
                j = a[i];
                a[i] = a[n];
                a[n] = j;
                i++;
        }
}

/**
 * last_add - add the remaining carry
 * @n: array with the string
 * @carry: remining carry
 * @k: counter for r array
 * @counter: remaining times to add the n
 * @r: array to get the result
 *
 * Return: remaining carry
 */

int last_add(char *n, int carry, int *k, int counter, char *r)
{
        int i = *k;

        for (; counter >= 0; counter--, i++)
        {
                if (((n[counter] - 48) + carry) + 48 >= 58)
                {
                        *(r + i) = ((n[counter] - 48) + carry) + 48 - 10;
                        carry = 1;
                }
                else
                {
                        *(r + i) = ((n[counter] - 48) + carry) + 48;
                        carry = 0;
                }
        }
        *k = i;
        return (carry);
}


/**
 * infinite_add - adds infinite size numbers
 *@n1: first array to be added.
 *@n2: second array to be added.
 *@r: array that is going to get the result.
 *@size_r: size of the array r.
 *
 *Return: r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int i = 0, j = 0, k = 0, carry = 0, *k2 = &k;

        for (; n1[i] != 0; i++)
                ;
        for (; n2[j] != 0; j++)
                ;
        if (i + 2 > size_r || j + 2 > size_r)
                return (0);
        j--;
        i--;
        size_r = size_r - 1;
        for (; i >= 0 && j >= 0 ; i--, j--, k++)
        {
                if (((((n1[i] - 48) + (n2[j] - 48) + carry) + 48)) >= 58)
                {
                        r[k] = (((n1[i] - 48) + (n2[j] - 48) + carry) + 48) - 10;
                        carry = 1;
                }
                else
                {
                        r[k] = ((n1[i] - 48) + (n2[j] - 48) + carry + 48);
                        carry = 0;
                }
        }
        if (j >= 0)
        {
                last_add(n2, carry, k2, j, r);
        }
        if (i >= 0)
        {
                last_add(n1, carry, k2, i, r);
        }
        if (carry == 1)
        {
                r[k] = 49;
                k++;
        }
        reverse_array(r, k);
        r[k] = '\0';
        return (r);
}


/**
 * main - adds numbers
 *@argc: counter of the inputs
 *@argv: the inputs in string
 *
 *Return: the add of th enumbers or Error if there is a string
 */

int main(int argc, char *argv[])
{
	int i;
	char *sum;
	char *j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], &j, 10);
		if (j[0] == '\0')
			sum = sum + atoi(argv[i]);
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
/*	printf("%i\n", sum);*/
	return (0);
}
