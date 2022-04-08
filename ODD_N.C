
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1;
clrscr();
printf("Enter the n number:");
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
printf("\n%d",i);
getch();
}