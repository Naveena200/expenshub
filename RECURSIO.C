#include<stdio.h>
int sum(int n);
int main()
{
int n,result;
clrscr();
scanf("%d",&n);
result=sum(n);
printf("sum=%d",result);
}
int sum(int n)
{
if(n!=0)
return n+sum(n-1);
else
return
}