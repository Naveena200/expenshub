#include<stdio.h>
#include<conio.h>
int sum(int n);
void main()
{
int number,result;
scanf("%d",&number);
result=sum(number);
printf("sum=%d",result);
}
int sum(int n)
{
if (n!=0)
return n + sum(n-1);
else
return n;
}