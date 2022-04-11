#include<stdio.h>
#include<conio.h>
void main()
{
int i,x[10],sum=0;
clrscr();
for(i=1;i<=10;i++)
{
scanf("%d",&x[i]);
}
for(i=1;i<=10;i++)
{
sum=sum+i;
}
printf("The sum of natural are:%d",sum);
getch();
}