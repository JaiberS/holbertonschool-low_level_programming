#include "holberton.h"
#include <stdio.h>
/**
 * print_number -  prints n integer number
 * @n: integer number
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, s1, s2/*, k = 0*/;

	for (; n1[i] != 0; i++)
		;
	for (; n2[j] != 0; j++)
		;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	j--;
	i--;
	size_r = size_r - 1;
	for(; j >= 0 && i >= 0; i--, j--)
	{
/*		if ((n1[i] + n2[j]) >= 58)
		{
			r[size_r] = (n1[i] + n2[j]) - 10;
						n1[i] = n1[i] + '1';
			k = i;
			i = k;
			while(n1[k] >= 58)
			{
			n1[k] = n1[k] - 10;
			n1[k + 1] = n1[k + 1] + 1;
			}
			}
		else*/
		s1 = n1[i] - 48;
		s2 = n2[j] - 48;
		printf(""
		r[size_r] = s1 + s2;
	}
	return(r);
}
