#include "holberton.h"
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int  _islower(int j)
{
	if (j>= 'a' && j<= 'z')
	{
		return(1);
	}
        else if (j>= 'A' && j<= 'Z')
	{
		return(0);
	}
	return(0);
}
