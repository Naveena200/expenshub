#include<stdio.h>
#include<conio.h>
int array[5];
int n,i;
void main()
{
  clrscr();
  for(n=0;n<=4;n++)
  {
  printf("Enter the values for a[%d]:",n);
  scanf("%d",&array[n]);
  }
  for(i=0;i<5;i++)
  {
  printf("a[%d] : %d \n",i, array[i]);
  }

  getch();
}