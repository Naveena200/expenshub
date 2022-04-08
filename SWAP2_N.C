#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter value a:");
scanf("%d",&a);
printf("Enter value b:");
scanf("%d",&b);
swap(a,b);
//printf("a=%d and b=%d",a,b);
getch();
}
swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("a=%d\n",a);
printf("b=%d",b);
}

