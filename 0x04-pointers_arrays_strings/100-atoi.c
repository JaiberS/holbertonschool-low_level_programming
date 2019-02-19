#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - string to integer
 * @s: the number in string
 *
 * Return: the number in integer
 */

int _atoi(char *s)
{
	int i = 0, m0 = 1, m1 = 0, j = 0, r = 0;

	while (s[i] != 0)
	{
		if (m0 == 1)
		{
			if (s[i] == '-')
				j++;
			if (s[i] >= '0' && s[i] <= '9')
			{
				m0 = 0;
				m1 = 1;
			}
		}
		if (m1 == 1)
		{
			switch(s[i]) {
			case '0' :
				r =  r * 10;
				break;
			case '1' :
				r = (r * 10) + 1;
				break;
			case '2' :
				r = (r * 10) + 2;
				break;
			case '3' :
				r = (r * 10) + 3;
				break;
			case '4' :
				r = (r * 10) + 4;
				break;
			case '5' :
				r = (r * 10) + 5;
				break;
			case '6' :
				r = (r * 10) + 6;
				break;
			case '7' :
				r = (r * 10) + 7;
				break;
			case '8' :
				r = (r * 10) + 8;
				break;
			case '9' :
				r = (r * 10) + 9;
				break;
			case '-':
				j++;
				break;
			}
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
				m1 = 0;
		}
		i++;
	}
	if (j % 2 != 0)
		r = r * -1;
	return (r);
}
