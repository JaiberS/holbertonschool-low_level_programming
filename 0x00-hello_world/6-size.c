#include <stdio.h>
/**
 *main - prints hello
 *Return:always return 0
*/
int main(void)
{
  char a;  
int j;
 long int b;
 long long int e;
 float i;
 printf("The size of a char is: %lu byte(s)\n",(unsigned long)sizeof(a));
 printf("The size of an int is: %lu byte(s)\n",(unsigned long)sizeof(j));
 printf("The size of a long int is: %lu byte(s)\n",(unsigned long)sizeof(b));
 printf("The size of a long long int is: %lu byte(s)\n",(unsigned long)sizeof(e));
 printf("The size of a float is: %lu byte(s)\n",(unsigned long)sizeof(i));
return (0);
}
