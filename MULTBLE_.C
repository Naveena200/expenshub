#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s;
clrscr();
printf("which table do u want:");
scanf("%d",&n);
printf("\nhow many times do u want:");
scanf("%d",&s);
for(i=1;i<=s;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
getch();
}