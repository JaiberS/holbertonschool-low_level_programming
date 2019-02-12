#include "holberton.h"
/**
 * _islower - check if the letter is lowercase
 *@j: letter to be checked
 *
 * Return: 1 true 0 fales
*/

int  _islower(int j)
{
	if (j >= 'a' && j <= 'z')
	{
		return (1);
	}
	else if (j >= 'A' && j <= 'Z')
	{
		return (0);
	}
	return (0);
}
