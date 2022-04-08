#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=2;
clrscr();
printf("Enter the n number:");
scanf("%d",&n);
for(i;i<=n;i=i+2)
printf("\n%d",i);
getch();
}