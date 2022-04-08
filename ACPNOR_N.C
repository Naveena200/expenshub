#include<stdio.h>
add(int a,int b)
{
int c;
c=a+b;
printf("sum is %d",c);
}
main()
{
int a=10,b=20;
clrscr();
add(a,b);
getch();
}