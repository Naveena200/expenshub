#include<stdio.h>
#include<conio.h>
void main()
{
int choice;
double r,ac,l,b,ar,s,as;
clrscr();
printf("Entert the number 10,20 or 30");
scanf("%d",choice);
switch(choice)


case 10:
{
printf("Enter the radius of the circle:");
scanf("%lf",&r);
ac=3.14*r*r;
printf("Area of circle: %f",ac);
break;
}

case 20:
{
printf("Enter the lenght and breath:");
scanf("%f%f",&l,&b);
ar=l*b;
scanf("%f",&ar);
printf("Area of rectangle %f",ar);
break;
}

case 30:
{
printf("Enter the side of a square:");
scanf("%f",&s);
as=s*s;
printf("Side of square is %f",as);
break;
}

default:
{
printf("Invalid number");
}

getch();
}


