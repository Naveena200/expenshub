#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n,sum=0;
clrscr();
printf("Enter the value of n:");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i=i+2;
}
printf("%d",sum);
getch();
}
