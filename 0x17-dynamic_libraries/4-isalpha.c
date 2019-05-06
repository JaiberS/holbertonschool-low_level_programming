#include "holberton.h"
/**
 * _isalpha - checks if the input is a letter
 *@j: The input to be checked
 *
 * Return: return 1 true 0 false
*/

int  _isalpha(int j)
{
	if (j >= 'a' && j <= 'z')
	{
		return (1);
	}
	else if (j >= 'A' && j <= 'Z')
	{
		return (1);
	}
	return (0);
}
