#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat -  function that concatenates two strings.
 *@dest: string to add the src string.
 *@src: string to be added to the dest string.
 *
 * Return: pointer to the resulting string dest.
 */

void reverse_array(int *a, int n)
{
	int j[n], i = 0, s = 0;

	for (; s != n; s++)
		j[s] = a[s];
	for (; n >= 0; n--)
	{
		a[i] = j[n - 1];
		i++;
	}
}
