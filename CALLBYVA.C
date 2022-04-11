#include<stdio.h>
#include<conio.h>
void main()
{
int a=5;
printf("The value:%d",a);
area_same(a);
getch();
}
area_same(int a)
{
int result;
result=a*a;
printf("The value of sum:%d",result);
}