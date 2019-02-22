#include <stdio.h>
/**
 * reverse_array - inverts the values of an array
 *@a: array to be reversed
 *@n: number of elements of the array
 *
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

/*
 *int last_add(char *n, int carry, int *k, int counter, char *r)
 *{
 *	for (; counter >= 0; counter--)
 *	{
 *		if( ((n[counter]-48) + carry) + 48 >= 58)
 *		{
 *			r[k] = ((n[counter] - '0') + carry) + 48 - 10;
 *			carry = 1;
 *		}
 *
 *		else
 *		{
 *			r[k] = ((n[counter]- '0') + carry) + 48;
 *			carry = 0;
 *		}
 *	}
 *	return (carry);
 *	}
 */

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
	int i = 0, j = 0, k = 0, carry = 0;

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
		for (; j >= 0; j--, k++)
		{
			if (((n2[j] - 48) + carry) + 48 >= 58)
			{
				r[k] = ((n2[j] - 48) + carry) + 48 - 10;
				carry = 1;
			}
			else
			{
				r[k] = ((n2[j] - 48) + carry) + 48;
				carry = 0;
			}
		}
	}
	if (i >= 0)
	{
		for (; i >= 0; i--, k++)
		{
			if (((n1[i] - 48) + carry) + 48 >= 58)
			{
				r[k] = ((n1[i] - 48) + carry) + 48 - 10;
				carry = 1;
			}
			else
			{
				r[k] = ((n1[i] - 48) + carry) + 48;
				carry = 0;
			}
		}
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
