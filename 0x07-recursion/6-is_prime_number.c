#include "holberton.h"
#include <stdio.h>

/**
 * prime - check if the number is prime
 * @n: number
 * @j: previous numbers
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int prime(int n, int j)
{
	if (n <= 1)
		return (0);
	if (n % j == 0 && j != 0 && n != 2)
		return (0);
	else if  ((j == (n / 2) + 1 && j != 1) || n == 2)
		return (1);
	else if (j < n)
	{
		j++;
		j = prime(n, j);
	}
	return (j);
}


/**
 * is_prime_number -  check if the number is prime
 * @n: number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	int j =  prime(n, 2);

	return (j);
}
