#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=20,c=30;
int *ptr;
ptr=&a;
printf("%d\n",*ptr);
ptr=&b;
printf("%d\n",*ptr);
ptr=&c;
printf("%d\n",*ptr);
getch();
}