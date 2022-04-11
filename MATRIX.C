#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3];
clrscr();
//for(i=0;i<=2;i++)
//{
//for(j=0;j<=2;j++)
//{
//scanf("%d",&a[i][j]);
//}
//}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
b[j][i]=a[i][j];
printf("%d\t",b[j][i]);
}
printf("\n");
}
getch();
}