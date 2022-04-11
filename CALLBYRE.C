#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b=2;
clrscr();
swap(&a,&b);
printf("a=%d and b=%d",a,b);
getch();
}
swap(int*a,int*b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}