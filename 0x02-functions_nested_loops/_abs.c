#include "holberton.h"
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int _abs(int j)
{
	if (j >= 0)
	{
		return(j);
	}
	else if (j < 0)
	{
		j = -j;
		return(j);
	}
	return(0);
}
