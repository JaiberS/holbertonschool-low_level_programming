#include <stdio.h>
/**
 * main - prind alphabet
 * Return: always returns 0
*/

int main(void)
{
	long n=1,j=n,s=1,r=0;
	while(r<50)
	{
		if(r!=49)
		{
		printf("%li, ",s);
		}
		else
		{
			printf("%li",s);
		}
		s=n+j;
		n=j;
		j=s;
		r++;
	}
	printf("\n");
	return(0);
}
