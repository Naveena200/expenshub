#include<stdio.h>
add()
{
int a,b,c;
printf("Enter a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);
c=a+b;
printf("sum is%d",c);
}
main()
{
clrscr();
add();
getch();
}