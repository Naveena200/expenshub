#include<stdio.h>
#include<conio.h>
add(int a,int b)
{
return a+b;
}
void main()
{
clrscr();
int a=10,b=20,c;
c=add(a,b);
printf("Sum is:%d",c);
getch();
}