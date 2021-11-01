#include<stdio.h>
#include<conio.h>
int ragul;
void main()
{
  while(1)
  {
   clrscr();
    printf("Ragul status");
    scanf("%d",&ragul);
    //condition checking
    if(ragul==0)
     {
       printf("Ragul is sitting\n");
     }
    else if(ragul==1)
     {
       printf("Ragul is standing\n");
     }
    else
     {

       printf("Ragul is invalid input");
     }
   }
   getch();
}