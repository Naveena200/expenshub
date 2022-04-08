#include<stdio.h>
#include<conio.h>
void main()
{
float choice,r,area_c,l,b,area_r,ba,h,area_t;
clrscr();
printf("Enter the choices only 11,22 and 33");
scanf("%f",&choice);
switch(choice)
{
case 11:
	printf("Enter the radius of circle");
	scanf("%f",&r);
	area_c=3.14*r*r;
	printf("Area of the circle:",area_c);
	break;
case 22:
	printf("Enter the length and breadth of the rectangle");
	scanf("%f%f",&l,&b);
	area_r=l*b;
	printf("Area of the rectangle:",area_r);
	break;
case 33:
	printf("Enter the base and height of the triangle");
	scanf("%f%f",&ba,&h);
	area_t=0.5*ba*h;
	printf("Area of the triangle:",area_t);
	break;

default:
       printf("Invalid statement");
       break;
}
getch();
}