#include <stdio.h>
/**
 * print_number -  prints n integer number
 * @n: integer number
*/
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

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, carry = 0, sum;

	for (; n1[i] != 0; i++)
		;
	for (; n2[j] != 0; j++)
		;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	j--;
	i--;
	reverse_array(n1, i);
	reverse_array(n2, j);
	if (i > j)
	{
		k = j;
		j = i;
		i = k;
	}
	for (k = 0; k < j; i++)
	{
		sum = ((n1[i] - '0') + (n2[i] - '0') + carry);
		carry = sum / 10;
	}
	size_r = size_r - 1;
	r[k] = '\0';
	return(r);
}
