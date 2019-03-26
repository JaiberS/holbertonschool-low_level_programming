#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int wildcmp2(char *s1, char *s2, int k, int i)
{
        int r = 0;

/*	printf("%c - %i - %c - %i", s1[0], i, s2[i], r);
	getchar();*/
        if (s1[0] == s2[i] && s2[i] != '\0')
        {
                r = wildcmp2(s1 + 1, s2, k, i + 1);
        }
        else if (s2[i] == '*')
        {
		k = i + 1;
                r = wildcmp2(s1, s2, k, i + 1);
        }
	else if (s1[0] != '\0')
	{
		i = k;
		r = wildcmp2(s1 + 1, s2, k, i);
	}
	else if (s1[0] == '\0' && s2[i] == '\0')
	{
		return (1);
	}
	else
		return (0);
	return (r);
}


int wildcmp(char *s1, char *s2)
{
	return (wildcmp2(s1, s2, 0, 0));
}
