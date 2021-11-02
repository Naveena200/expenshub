#include<stdio.h>
#include<conio.h>
//int diwali();
void diwali();
int laddu,ras,temp;

void main()
{
 clrscr();
      printf("Enter Laddu :");
      scanf("%d",&laddu);
      printf("Enter Ras   :");
      scanf("%d",&ras);
     diwali(laddu,ras);
     //temp=diwali(laddu,ras);
     // printf("Total sweets %d",temp);
 getch();
}
void diwali(int a,int b)
{
      printf("total sweets  :%d \n" ,a+b);
    // return a+b;
}