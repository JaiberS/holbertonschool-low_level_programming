#include "holberton.h"
/**
 * _isupper - check if the letter is uppercase
 *@c: letter to be checked
 *
 * Return: 1 true 0 fales
*/

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
