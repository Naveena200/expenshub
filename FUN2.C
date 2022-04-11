#include<stdio.h>
#include<conio.h>
//Accept parameter no return type
add(int a,int b)
{
int c;
c=a+b;
printf("Sum is:%d",c);
}
void main()
{
int a=10,b=20;
clrscr();
add(a,b);
getch();
}