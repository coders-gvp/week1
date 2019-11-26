#include <stdio.h>
int main()
{
char a;
int b;
float c;
printf("enter the values");
scanf("%c%d%f",&a,&b,&c);
printf("the char value read is %c\nthe integer value read is\t%d\nthe float value read is %.2f",a,b,c);
return 0;
}
