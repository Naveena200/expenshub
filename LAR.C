#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
clrscr();
printf("Enter the values:");
scanf("%d%d%d",&x,&y,&z);
if(x>y && x>z)
printf("X is greater");
else if(y>x && y>z)
printf("Y is greater");
else
printf("z is greater");
getch();
}

