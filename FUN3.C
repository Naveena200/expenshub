#include<stdio.h>
#include<conio.h>
//no parameter accept return type
add()
{
int a=10,b=20;
return a+b;
}
void main()
{
int c;
clrscr();
c=add();
printf("sum is:%d",c);
getch();
}