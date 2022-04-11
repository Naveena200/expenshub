#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sub[3][3];
clrscr();
for(i=0;i<=7;i++)
{
for(j=0;i<=7;j++)
{
scanf("%d",&sub[i][j]);
printf("The values are:%d\t",sub[i][j]);
}
printf("\n");
}
}