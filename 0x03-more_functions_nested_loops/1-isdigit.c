#include "holberton.h"
/**
 * _isdigit - check if the input is a digit
 *@c: letter to be checked
 *
 * Return: 1 true 0 fales
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
