#include <stdio.h>
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int main(void)
{
	unsigned long n=1,j=n,s=1,r=0;
	while(r<98)
	{
		if(r!=97)
		{
		printf("%lu, ",s);
		}
		else
		{
			printf("%lu",s);
		}
		s=n+j;
		n=j;
		j=s;
		r++;
	}
	printf("\n");
	return(0);
}
