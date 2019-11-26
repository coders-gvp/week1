#include <stdio.h>
void main()
{
char a,b;
int c;
scanf("%c%c",&a,&b,&c);
c=a+b;
printf("The addtion is %d\n",c);
c=a-b;
printf("The difference is %d\n",c);
c=a*b;
printf("The product is %d\n",c);
c=a/b;
printf("The quotient is %d\n",c);
c=a%b;
printf("the remainder is %d\n",c);
}