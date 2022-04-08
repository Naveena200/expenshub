#include<stdio.h>
#include<conio.h>
void main()
{
float bill,units ;
printf("Enter the units consumed=");
scanf("%f",&units);
if(units<=100&&units>=0)
{
printf("Electricity bill=0");
}
else if(units=150 && units>100)
{
bill=(units-50)*3;
printf("Electricity bill=%f rupees".bill);
}
else if(units=200 && units>150)
{
bill=(units-50)*4;
printf("Electricity bill=%f rupees",bill);
}
else if(units<250 && units>200)
{
bill=(units-250)*5;
printf("Electricity bill=%f rupees",bill);
}
else
{
printf("please enter the valid consumed units....");
}
return 0;
getch();
}
