#include<stdio.h>
#include<conio.h>
int ragul=0;
void main()
{
  do
  {
   yogesh:
   clrscr();
    printf("Ragul status");
    scanf("%d",&ragul);
    //condition checking
    if(ragul==0)
     {
       printf("Ragul is sitting\n");
       //ragul=1;
       //getch();
       //continue;
       //goto yogesh;
     }
    else if(ragul==1)
     {
       printf("Ragul is standing\n");
       //break;
     }
    else
     {
       printf("Ragul is invalid input");
     }
     getch();
   }while(ragul);
}