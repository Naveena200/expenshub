#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,sum=0;
clrscr();
printf("Enter a value");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("%d\n",sum);

getch();
}

