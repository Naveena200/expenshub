#include<stdio.h>
#include<conio.h>
void main()
{
int arr[4]={1,2,3,4},i;
clrscr();
for (i=0;i<4;i++)
{
printf("%d",*(arr+i));
}
getch();
}