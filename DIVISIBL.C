#include<stdio.h>
#include<conio.h>
int main ()
{
int i,num;
clrscr();
printf("enter the last number");
scanf("%d",&num);
if(num%3==0)
{
printf("%d is divisible by 3",num);
}
else

{
printf("%d is not divisible by 3",num);
}


return 0;
}