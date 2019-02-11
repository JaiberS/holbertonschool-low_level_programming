#include "holberton.h"
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int  _isalpha(char j)
{
	if (j>= 'a' && j<= 'z')
	{
		return(1);
	}
        else if (j>= 'A' && j<= 'Z')
	{
		return(1);
	}
	return(0);
}
