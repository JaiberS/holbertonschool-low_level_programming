#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_prime_number(2);
	printf("%d\n", r);
	r = is_prime_number(3);
	printf("%d\n", r);
	r = is_prime_number(5);
	printf("%d\n", r);
	r = is_prime_number(7);
	printf("%d\n", r);
	r = is_prime_number(11);
	printf("%d\n", r);
	r = is_prime_number(4);
	printf("%d\n", r);
	r = is_prime_number(113);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);
	return (0);
}
