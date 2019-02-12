#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - check random number
 * Return: always returns 0
*/

int main(void)
{
	/*char Holb[11] = "Holberton";*/
	char Holb[10] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
	int i = 0;

	for (; i <= 9; i++)
	{
		_putchar(Holb[i]);
	}
	return (0);
}
