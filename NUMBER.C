
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the Value:");
scanf("%d%d%d",&a,&b,&c);

if(a<b && a<c)
printf("a is smallest number");

else if(b<a && b<c)
printf("b is smallest number");

else
printf("c is smallest number");

getch();
}