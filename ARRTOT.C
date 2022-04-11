#include<stdio.h>
#include<conio.h>
void main()
{
int i,sub[5],total=0,avg;
for(i=0;i<=4;i++)
{
scanf("%d",&sub[i]);
}
for (i=0;i<=4;i++)
{
total=total+sub[i];
}
avg=total/5;
printf("The values are:%d",total);
printf("Average %d",avg);
getch();
}