#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - decode 101-crackme password
 *
 * Return: always 0
 */

int main(void)
{
	int j = 0, s, r = 128;

	srand(time(NULL));
	s = rand() % r;
	while (j <= 2772 - r)
	{
		j = s + j;
		_putchar(s);
	}
	s = 2772 - j;
	_putchar(s);
	return (0);
}
