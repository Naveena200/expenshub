#include<stdio.h>
void main()
{
int a=45,*p,**pp;
p=&a;
pp=&p;
printf("%d",**pp);
getch;
}