#include<stdio.h>
#include<conio.h>
void main()
{
int *a,*b,*c;
int ptr;
clrscr();
printf("Enter the values:");
scanf("%d%d",a,b);
*c=*a+*b;
ptr=*c;
printf("The value of c is:%d",ptr);
getch();
}








