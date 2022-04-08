#include<stdio.h>
int main()
{
int a=10,b=10,c;
int *ptr;
clrscr();
//ptr=&a;
//printf("%d\n",*ptr);
//ptr=&b;
c=a+b;
*ptr=c;
printf("%d\n",*ptr);
return 0;
}